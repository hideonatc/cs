"""
Practice 3
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
def create_file():
	fl = input("Create a file: ")
	str = input("Write something: ")
	f = open(fl,"w")
	f.write(str)
	print("File name:",fl)
	print("Context:",str)
	f.close()
create_file()