products = []
for a in range(100, 1000):
	for b in range(100, 1000):
		products.append(a * b)

print(max(list(filter(lambda x: str(x) == str(x)[::-1], products))))