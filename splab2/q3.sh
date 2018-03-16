#!/bin/bash
oldifs=$IFS
IFS=$'\n'
showmeowner()
{
#pathh=(`ls -l /home/$1 | grep "ashir"`)
#echo ${pathh[0]}
f=$1
#arr=(`ls -l ~/`)
arr=(`ls ~/`)
for i in ${arr[*]}
do
#if [ ${ff[2]} = "ashir" ]
if [ -f ~/$i ]
then
q1=(`ls -l ~/$i`)
echo ${q1[*]}
fi
done
IFS=$oldifs
}

#main
showmeowner $1

