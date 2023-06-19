def is_consession(age):
    if age > 5 and age < 19 or age > 65:
        return "You can pay the consession fare."
    else:
        return "You cannot pay the consession fare."

print(is_consession(16))