#!/bin/bash

#declare -i count=1
count=1
count1=0
touch evenfile oddfile
cat $1 | while read LINE
do
	cat $1 | while read LINE1
	do

		#echo `expr $count % 2`
		count1=`expr $count + 1`
		echo $count1
	done
	echo $count1
	exit
	if [ `expr $count % 2` = 0 ]
	then
		echo $LINE >> evenfile
	else
		echo $LINE >> oddfile
	fi
	count=`expr $count + 1`
	#echo $count
done

echo $count1
