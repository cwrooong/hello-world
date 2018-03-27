#!bin/bash

#test grep 
file_num = $(grep -i 'integ.i_u_user_360_h_view_m_$ARG_OPTIME_MONTH' *.tcl | wc -l)
echo $file_num

DATE=`date +%Y%m%d`

##
file=`grep -i 'integ.i_u_user_360_h_view_m_$ARG_OPTIME_MONTH' *.tcl`
ehco $file

grep -i 'integ.i_u_user_360_h_view_m_$ARG_OPTIME_MONTH' *.tcl > grep_file_$DATE.rpt
exec < grep_file_$DATE.rpt
read GREP_FILE
while [ $? -eq 0]
do
  ...  
  echo $GREP_FILE  
  read GREP_FILE
done

echo
echo "end scrip"
