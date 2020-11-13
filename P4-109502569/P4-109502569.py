"""
Practice 4
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
def func(x,c,y,z):
	if c=='+':
		if x+y==z:return 1
	elif c=='-':
		if x-y==z:return 1
	elif c=='*':
		if x*y==z:return 1
	elif c=='/':
		if x/y==z:return 1
	return 0
input_f = open("test.txt",'r')
output_f = open("ans-109502569.txt",'w')
for line in input_f:
	if func(int(line.split()[0]),line.split()[1],int(line.split()[2]),int(line.split()[4])):
		output_f.write('T\n')
	else :
		output_f.write('F\n')
input_f.close()
output_f.close()