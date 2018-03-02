#!/bin/bash

echo "Part1"

if [ $# -eq 2 ]
then
file1=(`ls -l $1`) 
#echo ${file1[2]}
#echo $2

if [ ${file1[2]} = $2 ]
then
echo "Cheating = 0"
else
echo "Cheating = 1"
fi
echo ${file1[*]} 
fi


echo "Part2"

if [ $# -eq 5 ] && [ $1 = '-c' ]
then
file1=(`ls -l $2`)
file2=(`ls -l $4`)
if [ $3 != $5 ] && [ ${file1[2]} != ${file2[2]} ]
then
echo "Cheating = 0"
else
echo `diff -c $2 $4`
difcount=`diff -c $2 $4 | wc -w`
if [ $difcount -eq 0 ]
then
echo "Cheating = 1"
else
echo "Cheating = 0"
fi
echo "file1 context"
echo `cat $2`
echo "file2 context"
echo `cat $4`
fi
fi
