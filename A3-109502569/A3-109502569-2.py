"""
Assignment 3
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
count = 0
find_str = input("find: ")
replace_str = input("change to: ")
f = open("text.txt","r")
for i in range(1,6):
	line = f.readline()
	print(line,end='')
	j = 0
	while j<len(line)-len(find_str):
		if find_str==line[j:j+len(find_str)]:
			count+=1
			print(replace_str,end='')
			j+=len(find_str)
		else:
			print(line[j],end='')
			j+=1
	print(line[j:],end='')
	print()
print("change count:",count)