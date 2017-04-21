n = 600851475143
x = 2
largest = x
while x * x <= n:
	if n % x == 0:
		i = 2
		prime = True
		while prime and i * i <= x:
			if x % i == 0:
				prime = False
			else:
				i += 1
		if prime:
			largest = x
	x += 1

print(largest)
