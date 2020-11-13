"""
Assignment 2
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1001
"""
str = input("Input String: ")
str_len = len(str)
idx = 0
a,e,i,o,u = 0,0,0,0,0
while idx<str_len :
	if str[idx]=='a' :
		a+=1
	elif str[idx]=='e' :
		e+=1
	elif str[idx]=='i' :
		i+=1
	elif str[idx]=='o' :
		o+=1
	elif str[idx]=='u' :
		u+=1
	idx+=1
print("a:",a, ",e:",e, ",i:",i,",o:",o,",u:",u)