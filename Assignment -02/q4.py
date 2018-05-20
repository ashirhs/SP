import psutil
import os
import sys
import time

temp=0
if len(sys.argv)<2:
	print ("NO process is given.")
else:
	for id in sys.argv:
		if temp==0:
			temp=1
			continue
		pid=int(id)
		if psutil.pid_exists(pid):
			print ("Process ID: ",psutil.Process(pid=pid)._pid)
			print ("Process Name: ",psutil.Process(pid=pid).name())
			print ("Process Status: ",psutil.Process(pid=pid).status())	
			print ("Process Parent ID: ",psutil.Process(pid=pid).ppid())
			print ("Process Creation time: ",time.ctime(psutil.Process(pid=pid).create_time()))
			print ("Memory info: ",psutil.Process(pid=pid).memory_info())
			print ("Opened files by process: ",psutil.Process(pid=pid).open_files())
			print("#######################################################")
		else:
			print ("Wrong id gven", pid)	

