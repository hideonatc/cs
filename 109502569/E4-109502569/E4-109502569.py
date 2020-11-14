in_f = open("text.txt","r")
out_f = open("ans-109502569.txt","w")
def cal(a,c,b):
	if c=='+':
		return a+b
	elif c=='-':
		return a-b
	elif c=='*':
		return a*b
	else:
		return float(a/b)
for line in in_f:
	w = line.split()
	stack = []
	i = 0
	while i<len(w[0]):
		if w[0][i]=='+' or w[0][i]=='-' or w[0][i]=='*' or w[0][i]=='/' or w[0][i]=='(' or w[0][i]==')':
			stack.append(w[0][i])
			i+=1
		else:
			n = 0
			while w[0][i]!='+' and w[0][i]!='-' and w[0][i]!='*' and w[0][i]!='/' and w[0][i]!='(' and w[0][i]!=')':
				n=n*10+int(w[0][i])
				i+=1
			stack.append(n)
	i = 0
	while len(stack)>1:
		if stack[i]==')':
			result = cal(stack[i-3],stack[i-2],stack[i-1])
			stack_a = stack[0:i-4]
			stack_a.append(result)
			stack = stack_a+stack[i+1:]
			i=i-5
		else:
			i+=1
	if stack[0]==float(w[2]):
		out_f.write("T\n")
	else:
		out_f.write("F\n")
in_f.close()
out_f.close()