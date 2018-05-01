n=input("Enter words: ")
#t=tuple(n)
li=n.split(" ")
li.sort()
s=set(li)
new =[]
for values in s:
	new.append(values)
new.sort()
print (new)
