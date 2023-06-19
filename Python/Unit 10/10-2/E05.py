list_of_numbers = []

def fibo_list(how_many):
    first_number = 0
    second_number = 1
    list_of_numbers.append(first_number)
    list_of_numbers.append(second_number)

    for i in range(1, (how_many - 1)):
        third_number = first_number + second_number
        list_of_numbers.append(third_number)
        first_number = second_number
        second_number = third_number

def fibonacci_num(specific_number):
    fibo_list(specific_number * 2)
    if specific_number < 1:
        print("Sorry, that number is invalid.")
    else:
        print(list(list_of_numbers)[int(specific_number)])


fibonacci_num(4)