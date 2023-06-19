numberlist = [7, 7, 1, 5, 22, 7, 134, 7, 87, 9]
numberofseven = 0
firstsevenpos = numberlist.index(7)

for i in numberlist:
    if i == 7:
        numberofseven = numberofseven + 1
    else:
        continue

print("The number Seven appears", numberofseven, "times in the list.")
print("The first Seven appears at position", firstsevenpos, "in the list")