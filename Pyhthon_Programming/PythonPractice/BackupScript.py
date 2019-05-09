#!/usr/bin/python
import os
import time
srcDir = ["/home/haider/Programming_main/Pyhthon_Programming/PythonPractice/Backup/BackupSource"]
dstDir = "/home/haider/Programming_main/Pyhthon_Programming/PythonPractice/Backup/BackupDestination"

backup = dstDir + time.strftime('%Y%m%d%H%M%S') + '.zip'

zip_command = "zip -qr '%s' %s " % (dstDir, ' '.join(srcDir))

if os.system(zip_command) == 0:
	print "Successful Backup to ", backup
else:
	print "Backup Failed"




