number_range = range(10)
number = 0
number2 = 0

print("FOR Loop:")

for i in number_range:
    number = number + 1
    print(number)
    if number == 7:
        break

print()
print("WHILE Loop:")

while number2 < 10:
    number2 = number2 + 1
    print(number2)
    if number2 == 7:
        break