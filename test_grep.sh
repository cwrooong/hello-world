#!bin/bash

#test grep 
file_num = $(grep -i 'integ.i_u_user_360_h_view_m_$ARG_OPTIME_MONTH' *.tcl | wc -l)
echo $file_num
