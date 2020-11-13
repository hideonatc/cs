"""
Assignment 5
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
def bin_to_dec(st):
	rt = 0
	for i in range(len(st)-1,-1,-1):
		if st[i]=='1':
			rt+=2**(len(st)-1-i)
	return rt
def dec_to_bin(s):
	n = 1
	rt=""
	while s>n*2:
		n*=2
	while n>0:
		rt+=str(s//n)
		s=s-n*(s//n)
		n=int(n/2)
	return rt
while 1:
	string = input()
	if string=="-1":
		break
	str_a = ""
	i = 0
	while string[i]=='0' or string[i]=='1':
		str_a+=string[i]
		i+=1
	opr = string[i]
	str_b = string[i+1:]
	if opr=='+':
		print(dec_to_bin(bin_to_dec(str_a)+bin_to_dec(str_b)))
	else:
		print(dec_to_bin(bin_to_dec(str_a)-bin_to_dec(str_b)))