#!/bin/bash

printtable()
{
s=$1
e=$2
t=$3
for i in `seq $s $e`
do
echo "$s * $t = `expr $s \* $t`"
#s=`expr $s + 1`
done
}

rprinttable()
{
s=$1
e=$2
t=$3
for i in `seq $e -1 $s`
do
echo "$s * $t = `expr $s \* $t`"
#s=`expr $s + 1`
done
}

#main

if [ $# -eq 0 ]
then
echo "No Argument Bye!"

elif [ $# -gt 6 ]
then
echo "Argument >6 Bye!"


elif [ $# -eq 1 ]
then
s=$1
printtable 1 10 $1

elif [ $2 = "-s" -a $# -eq 2 ]
then
t=$1
e=$3
printtable $e 10 $t

elif [ $2 = "-e" -a $# -eq 2 ]
then
t=$1
e=$3
printtable 1 $e $t

elif [ $2 = "-s" -a $4 = "-e" -a $# -eq 5 ]
then
t=$1
s=$3
e=$5
printtable $s $e $t

elif [ $2 = "-s" -a $4 = "-e" -a $6 = "-r" -a $# -eq 6 ] 
then
t=$1
s=$3
e=$5
rprinttable $e $s $t -1
fi
