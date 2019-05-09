#!/usr/bin/python
#Filename : FirstPython_Script.py 

import os
import time

a=time.strftime("%Y_%M_%D")

print a	

'''from ./ABC/MaxNo import FindMaxNo, Max

print "The Command Line argument:"
FindMaxNo(12,15)
print Max


'''


''' Doc String
def main():
		Hello 1st line Hello 2nd line
		for i in sys.argv:
			print i
			Ye Kya ho 
			raha hai bhai
	
print main.__doc__
'''



'''
For Loo Decrement
for a in range (10,0,-1):
	print a
'''


'''
def main():
	print "Hello Main"

if __name__== ' main ':
	main()
'''


'''
cmp='d'

def cmpareFun(cmp):
#	global cmp
	if cmp == raw_input('Enter Some No:'):
		print "Entered Character is equivalent to given Charavter"
	else:
		print "Not Equal Character when Comp with Int inut"


cmpareFun('c')
print cmpareFun.__doc__
help(cmpareFun)
'''




'''
if cmp ==no:
	print "Equal Charavter"
else:
	print "Not Equal Character"

'''


''' For Loop
for a in range (1,10):
	print a*2 
	if a*2<20:
		continue
	else:
		break
'''

''' Loop
for a in range (1,6):
	for i in range(a):
		print "*"
	print " "

'''


'''
print("Second Number Pattern ")
lastNumber = 6
for row in range(1, lastNumber):
	for column in range(1, row + 1):
		print(column, end=' ')
	print("")

'''

'''
while True:
	s in range(5,0,-1):
		print s
print 'Done'
'''



'''
a=1

for a in range(5, 0 , -1):
	print a+4
'''






'''
a=7
count=0
while a<10:
	print a
	a=a+1

'''





'''
a=23
b=19
c=20

#GreaterNo= 10 if a >b and b <c else 100
#GreaterNo = 11 if a>b and b>c print "Hello" elif b>c and c>a print "No Hello" else print "3rd Print"
GreaterNo = 12 if a>b and b>c else a
print GreaterNo
'''


'''
if b>c:
	print "B is greater than C"
	if c >a :
		print "B is the Greatest no among A,B,C"
	else:
		print "C is the 2nd greatest NO"
else:
	print "A is the greatest No"
'''



'''
b=15
c= ~b
print c<<2

'''



'''
Dict={}
Dict['one']="Hello Mr"
Dict[2]=" Murabn"

print Dict['one']

ComptDict={'name': Dict['one'] + Dict[2], 'code': 112, 'Dept': 'Ed'}
print ComptDict.values()
'''




'''
#LIST
li = ['Hello',12.3,123,'dragon']
print li[1:]*2
'''

"""
if 1>2:
	print "1 is greater Than 2"
else:
	print "2 is greater thann 1"
"""


"""
import sys

try:
	#open a file
	file = open(Alpha_X,"w")
except IOError:
	print "There was an error writing too", Alpha_X
	sys.exit()

"""
'''
Name="Jain"
str= "Alpha" + Name
print "Alpha"+Name * 2
'''



