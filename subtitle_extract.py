import pysrt, sys
import easygui
from operator import *
import nltk
def parse_time(time_str):
  ind_times=time_str.split(':')

  hours=0
  seconds=0
  minutes=0

  if( len(ind_times) == 3 ):
    hours=int(ind_times[0])
    minutes=int(ind_times[1])
    seconds=int(ind_times[2])
  elif( len(ind_times) == 2 ):
    minutes=int(ind_times[0])
    seconds=int(ind_times[1])
  elif( len(ind_times) == 1 ):
    seconds=int(ind_times[0])

  return { 'hours': hours, 'minutes': minutes, 'seconds': seconds }

def refine_text(string_arg):
  temp=string_arg.replace('\n',' ')
  temp=temp.replace('...','$#%')
  if(temp[-1]!='.'):
    temp+=' '
  temp=temp.replace('.','.\n')
  temp=temp.replace('$#%','...')
  return temp

def default_string(corpus):
  tokens=nltk.word_tokenize(corpus)
  tagged=nltk.pos_tag(tokens)
  text_corpus=nltk.Text(tokens)
  dates=[i for i in tagged if i[1]=='CD']
  dates=[i for i in dates if (i[0].isdigit() and len(i[0])==4)]
  year=""
  main_topic=""
  if len(dates)==1:
    year=dates[0][0]
  elif len(dates)>1:
    freqdict=nltk.FreqDist(text_corpus);
    max_freq=max([freqdict[i[0]] for i in dates])
    candidates=[i for i in dates if freqdict[i[0]]==max_freq]
    year=candidates[0][0]

  main_topic=text_corpus.collocations()
  if main_topic!="":
    main_topic=main_topic.split(';')[0]
  if year!="":
    year+=" - "
  return year+main_topic

if __name__ == "__main__":
  arguments=sys.argv[1:]
  subs=pysrt.open(arguments[0])
  start_time=parse_time(arguments[1])
  end_time=parse_time(arguments[2])
  extract=subs.slice(starts_after=start_time, ends_before=end_time)
  refined_extract=[refine_text(str(i.text)) for i in extract]
  if(len(refined_extract)!=0):
    corpus=reduce(add, refined_extract)
    prefix=arguments[0][:(arguments[0].rfind('/')+1)]
    filename=easygui.enterbox('Enter Filename (without extension): ', 'Subtitle-Split', default_string(corpus))
    main_string_extract=reduce(add, refined_extract)
    f=open(prefix+filename+'.txt', 'a')
    f.write(str(main_string_extract)+'\n')
    f.close()

