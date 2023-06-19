CURRENT_YEAR = 2022
user_age = int(input("Enter your age and I'll guess your birth year: "))
user_b_year = int(CURRENT_YEAR) - int(user_age)

print("Your birth year is:", user_b_year)