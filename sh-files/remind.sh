#!/bin/bash

hour=20  #设置总共运行的小时数
min=15    #间隔分钟数
for x in $(seq 1 $hour)
do	
   for (( i = 0; i < 60; i=(i+min) ))
   do
      sleep ${min}m
      zenity --notification --text "心无旁骛，万事可破"

    done
done
