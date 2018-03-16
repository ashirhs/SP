#!/bin/bash

#cat ./q1.sh
arr=(`cat ./q1.sh`)
echo ${arr[0]}
echo ${arr[1]}
echo ${arr[2]}

echo ${arr[*]}
echo ${#arr[*]}


