def wrong_pizza_per_person(slices, people):
    import math
    if people == 0:
        return 0
    else:
        return math.floor(slices / people)

def right_pizza_per_person(slices, people):
    import math
    if people == 0:
        return 0
    else:
        return math.floor(slices // people)


print(wrong_pizza_per_person(8, 0))
print(right_pizza_per_person(8, 0))