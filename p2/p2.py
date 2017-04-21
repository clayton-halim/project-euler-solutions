MAX = 4000000
a = 1
b = 1
c = a + b
total = 0

while c <= MAX:
	if c % 2 == 0:
		total += c

	a = b
	b = c
	c = a + b

print(total)