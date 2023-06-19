def wrong_binary_check(parameter):
    return parameter == 1 or 2

def right_binary_check(parameter):
    return parameter == 1 or parameter == 2

print(wrong_binary_check(2))
print(right_binary_check(2))