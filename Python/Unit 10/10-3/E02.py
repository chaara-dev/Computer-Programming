number = 0
number2 = 0

for i in range(12):
    number = number + 1
    if number % 2 == 0:
        continue
    else:
        print(number)

while number2 < 12:
    number2 = number2 + 1
    if number2 % 2 != 0:
        print(number2)
    else:
        continue