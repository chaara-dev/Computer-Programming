fibonacci = [1, 1, 2, 3, 5, 8]
i = 0

while i < 11:
    fibonacci.append(fibonacci[-1] + fibonacci[-2])
    print(fibonacci)
    i += 1