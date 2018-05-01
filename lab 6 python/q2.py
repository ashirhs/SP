#n=raw_input("Enter range: ")
n=input()
print (n)
li=range(1,int(n)+1)
d={}
for i in li:
	d[i]= i*i
	
print (d)