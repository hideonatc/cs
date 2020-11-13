"""
Assignment 5
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
tab = "0123456789ABCDEF"
def dec_to_hex(s):
	n = 1
	ans=""
	while s>n*16:
		n*=16
	while n>0:
		ans+=tab[s//n]
		s=int(s%(n*(s//n)))
		n=int(n/16)
	return ans
while 1:
	str_in = input("Binary: ")
	if str_in=="-1":
		break
	sum = 0
	for idx in range(len(str_in)-1,-1,-1):
		if str_in[idx]=='0':
			continue
		elif str_in[idx]=='1':
			sum+=2**(len(str_in)-1-idx)
		else:
			print("Not Binary Number!")
			sum=-1
			break
	if sum>=0:
		print(dec_to_hex(sum))