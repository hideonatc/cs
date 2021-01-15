"""
Assignment 13
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
"""
string,pattern = input(),input()
idx,i= len(string)-1,len(pattern)-1
def func(a,b):
	if a==len(string) and b==len(pattern):
		return True
	if ( a==len(string) and b!=len(pattern) ) or ( a!=len(string) and b==len(pattern) ):
		return False
	"""print("string["+str(a)+"]="+string[a]+" vs pattern["+str(b)+"]="+pattern[b])"""
	if pattern[b]==string[a]:
		return func(a+1,b+1)
	elif pattern[b].isalpha() and pattern[b]!=string[a]:
		return False
	elif pattern[b]=='*':
		while b+1<len(pattern) and pattern[b+1]=='*':
			b+=1
		if b==len(pattern)-1:
			return True
		for i in range(len(string)-1,a-1,-1):
			"""print("for"+str(i)+string[i]+pattern[b])"""
			if string[i]==pattern[b+1]:
				return func(i,b+1)
		return False
	elif pattern[b]=='?':
		return func(a+1,b+1)
if func(0,0):
	print("true\n")
else:
	print("false\n")