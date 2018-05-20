import numpy
import sys

m=numpy.zeros((8,8))
temp=0
for i in range(0,8):
	for j in range(0,8):
		m[i][j]=temp
		temp=temp+1
print m

#n=numpy.matrix([[int(sys.argv[1]),int(sys.argv[2])],[int(sys.argv[3]),int(sys.argv[4])]])
n=numpy.zeros((2,2))
n[0][0]=int(sys.argv[1])
n[0][1]=int(sys.argv[2])
n[1][0]=int(sys.argv[3])
n[1][1]=int(sys.argv[4])
print n

'''slice = m[0:2,0:2]
print slice
for s in slice:
	#if s == n:
	print s
	exit()'''

for i in range(0,7):
	for j in range(0,7):
		slice=m[i:i+2,j:j+2]
		data=numpy.array(slice)
		#print data
		if numpy.array_equal(data,n):
			#print n
			#print data
			print ('\nMatrix found! At point: (',i,j)
			exit()
print ("\nMatrix does not exist!")
#slice = m[0:2,0:2]
#data = numpy.array(slice)
#print data

#print type(n)
#print type(data)
#print len(n)
#print len(data)

#if data.all() == n.all():
#	print '\nMatrix found'
