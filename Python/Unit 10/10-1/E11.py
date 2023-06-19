number_list = [2, 3, 5, 7]
primes = []
not_primes = []

for num in number_list:
    if num % 2 != 0:
        primes.append(num)
    elif num % 2 == 0:
        not_primes.append(num)

print(primes)