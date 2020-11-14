n = int(input())
for i in range(1,n+1):
		print(" "*(n-i),end='')
		print('*'*(2*i-1))
for i in range(1,n):
	print(" "*int((n+1)/2),end='')
	print("*"*(n-2))