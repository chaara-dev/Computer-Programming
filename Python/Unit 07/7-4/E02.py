def dateable_age(user_age):
    import math
    if user_age <= 0:
        return "False"
    else:
        return math.ceil(user_age / 2 + 7)

print(dateable_age(16))