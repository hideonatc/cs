"""
Assignment 2
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1001
"""
import random
i = random.randint(1,100)
count = 0
guess = int(input("輸入一數字 : "))
while i!=guess :
	if i<guess :
		print("比",guess,"還要小")
	else :
		print("比",guess,"還要大")
	count+=1
	guess = int(input("輸入一數字 : "))
print("猜對了！總共猜了",count+1,"次")