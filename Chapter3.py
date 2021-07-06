#I know that Chapter 3 didnt have huge goal in mind (just to learn about recusion) so i just did factorial
def fact(x):
	if x == 1:
		return 1
	else:
		return x * fact(x - 1)

print(fact(10))
