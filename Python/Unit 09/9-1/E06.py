i = 0
added_flavor = "cheese"
pizza_flavors = []

while i < 4:
    if i == 0:
        pizza_flavors.append(added_flavor)
        added_flavor = "pepperoni"
        i += 1
    elif i == 1:
        pizza_flavors.append(added_flavor)
        added_flavor = "hawaiian"
        i += 1
    elif i == 2:
        pizza_flavors.append(added_flavor)
        added_flavor = "vegetarian"
        i += 1
    elif i == 3:
        pizza_flavors.append(added_flavor)
        added_flavor = "meatlovers"
        i += 1

print(pizza_flavors + [added_flavor])