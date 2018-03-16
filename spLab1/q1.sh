#!/bin/bash

if [ $# -eq 2 ]
then
echo "$1"
echo "$2"
num1=$1
num2=$2
fi

if [ $# -eq 0 ]
then
read -p "Enter 1st number: " num1
read -p "Enter 1st number: " num2
fi

if [ $# -eq 1 ]
then
read -p "Enter 1st number: " num1
fi



echo "sum: "`expr $num1 + $num2`
echo "sub: "`expr $num1 - $num2`
echo "mul: "`expr $num1 \* $num2`

if [ $num2 -eq 0 ]
then
echo "Division not possible"
fi

echo "mod: "`expr $num1 % $num2`
