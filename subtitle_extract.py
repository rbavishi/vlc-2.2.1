import pysrt, sys
import easygui
from operator import *
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
  temp=string_arg.replace('...','$#%')
  if(temp[-1]!='.'):
    temp+=' '
  temp=temp.replace('.','.\n')
  temp=temp.replace('$#%','...')
  return temp


if __name__ == "__main__":
  arguments=sys.argv[1:]
  subs=pysrt.open(arguments[0])
  start_time=parse_time(arguments[1])
  end_time=parse_time(arguments[2])
  extract=subs.slice(starts_after=start_time, ends_before=end_time)
  refined_extract=[refine_text(str(i.text)) for i in extract]
  if(len(refined_extract)!=0):
    filename=easygui.enterbox('Enter Filename (without extension): ', 'Subtitle-Split', 'Subtitle-Extract')
    main_string_extract=reduce(add, refined_extract)
    f=open(filename+'.txt', 'a')
    f.write(str(main_string_extract)+'\n')
    f.close()

