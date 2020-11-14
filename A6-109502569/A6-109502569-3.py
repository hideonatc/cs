"""
Assignment 6
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
n = int(input())
while n!=0:
	U,N,E = 1,2,3
	for i in range(1,n+1):
		flip = input()
		if flip=="north":
			w = U
			U = 7-N
			N = w
		elif flip=="south":
			w = N
			N = 7-U
			U = w
		elif flip=="east":
			w = U
			U = 7-E
			E = w
		else:
			w = E
			E = 7-U
			U = w
	print("Up:",U,"North:",N,"East:",E,"South:",7-N,"West:",7-E,"Down:",7-U)
	n = int(input())