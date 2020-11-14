s = input()
def is_qua(str):
	for i in range(0,len(str)):
		if str[i]!='0' and str[i]!='1' and str[i]!='2' and str[i]!='3':
			return 0
	return 1
def qua_to_dec(str):
	r = 0
	for i in range(0,len(str)):
		r=r*4+int(str[i])
	return r
def is_nine(str):
	for i in range(0,len(str)):
		if int(str[i])<0 or int(str[i])>8:
			return 0
	return 1
def nine_to_dec(str):
	r = 0
	for i in range(0,len(str)):
		r=r*9+int(str[i])
	return r
while 1:
	if s=="-1":
		break
	if is_qua(s):
		print(qua_to_dec(s))
	elif is_nine(s):
		print("不是4進位數")
		print(nine_to_dec(s))
	else:
		print("不是4進位數")
		print("不是9進位數")
	s = input()