"""
Assignment 4
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
input_f = open("score_109502569.txt","r")
subject = ["english","math","science","history","average"]
sub = input("查詢項目: ")
sdt = input("姓名: ")
for line in input_f:
	if sdt.lower()!=line.split()[0].lower():
		continue
	for index in range(0,5):
		if sub.lower()==subject[index]:
			print(line.split()[0],sub.capitalize(),line.split()[index+1])