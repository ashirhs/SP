n=input("Enter numbers: ")
#t=tuple(n)
li=n.split(",")
t=()
mylist=[]

for values in li:
	mylist.append(values)
t=tuple(mylist)
print (t)
print (li)
