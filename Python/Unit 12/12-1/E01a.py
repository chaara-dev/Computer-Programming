fruits = ["apples", "bananas", ["oranges", ["grapes"], "mangoes"], "strawberries"]

print(fruits)
print(fruits[2])
print(fruits[2][1][0])

for item in fruits:
    if type(item) == list:
        print("There is a list among us.")

i = 0

while i < len(fruits):
    if type(fruits[i]) == list:
        print("There is a list among us.")
    i += 1