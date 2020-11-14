a = input()
b = input()
print("OR: ",end='')
for i in range(0,len(a)):
	if a[i]=='1' or b[i]=='1':
		print("1",end='')
	else:
		print("0",end='')
print("\nAND: ",end='')
for i in range(0,len(a)):
	if a[i]=='1' and b[i]=='1':
		print("1",end='')
	else:
		print("0",end='')
print("\nXOR: ",end='')
for i in range(0,len(a)):
	if int(a[i])+int(b[i])==1:
		print("1",end='')
	else:
		print("0",end='')
print()