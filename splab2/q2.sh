#!/bin/bash

#arr=(`ls -l $1`)
#arr=(`cat $1`)
#arr=(`pidof $1`)
#p=${$arr[0]}
#echo ${arr[*]}
#pathh=`cat /proc/$1/status`

#echo `grep $pathh -i "pid"`

arr=(`pidof $1`)
echo "${arr[0]}"
#for i in `pidof ${arr[0]}`
for i in ${arr[0]}
do

echo `cat /proc/$i/status | grep -i "pid"`
echo `cat /proc/$i/status | grep -i "ppid"`
echo `cat /proc/$i/status | grep -i "name"`
echo `cat /proc/$i/status | grep -i "state"`


done
