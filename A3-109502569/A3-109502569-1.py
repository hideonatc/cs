"""
Assignment 3
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
def find_prime(n):
	for i in range(2,int(n/2)+2):
		if n%i==0:
			print(n,"N")
			return
	print(n,"Y")
	return
def find_factor(n):
	print("1 N")
	for i in range(2,int(n/2)+2):
		if n%i==0:
			find_prime(i)
	find_prime(n)
	return
num = int(input("input:"))
find_factor(num)