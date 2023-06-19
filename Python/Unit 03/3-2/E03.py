oranges = 3.56
apples = 3.80
bananas = 1.72


print("Welcome to Tyler's digital fruit store!")

print()
print("Here's our fruit prices per kg:")

print("Oranges = $3.56 per kg")
print("Apples = $3.80 per kg")
print("Bananas = $1.72 per kg")

print()

print("How many kilograms are you buying of each fruit?")
total_oranges = oranges * float(input("Oranges --> "))
total_apples = apples * float(input("Apples -->"))
total_bananas = bananas * float(input("Bananas -->"))

print()

print("Your total is", total_apples + total_bananas + total_oranges, "dollars.")