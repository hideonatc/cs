"""
Assignment 4
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
input_f = open("score.txt","r")
output_f = open("score_109502569.txt","w")
output_f.write(input_f.readline())
for line in input_f:
	sum = 0
	output_f.write(line.split()[0]+' ')
	for i in range(1,5):
		sum+=int(line.split()[i])
		output_f.write(line.split()[i]+' ')
	output_f.write(str(sum/4))
	output_f.write('\n')
input_f.close()
output_f.close()