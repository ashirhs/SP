n=input("Enter words: ")
#t=tuple(n)
#li=n.split(" ")
digit=0
let=0
num=["0","1","2","3","4","5","6","7","8","9"]
alph="qwertyuioplkjhgfdsazxcvbnm"
for letter in n:
	#if letter in num:
	if letter.isdigit():
		digit+=1
	if letter.isalpha():
		let+=1
print (digit)
print (let)