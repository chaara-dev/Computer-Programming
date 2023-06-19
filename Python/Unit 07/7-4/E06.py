import math

def wrong_round_up(given_number):
    return math.ceil(given_number)

def correct_round_up(given_number):
    if type(given_number) != float:
        return "error"
    else:
        return math.ceil(given_number)


print(wrong_round_up(6.254))
print("------")
print(correct_round_up(6.254))