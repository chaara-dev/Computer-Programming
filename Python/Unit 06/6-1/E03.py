def past_eighteen(age):
    if age > 18:
        return age - 18
    else:
        return 18 - age

print(past_eighteen(16))