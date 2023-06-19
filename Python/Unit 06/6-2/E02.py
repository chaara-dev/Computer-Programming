fruits = input("Enter your fruit: ").lower()

if fruits.lower() == "apples" or "bananas" or "oranges":
    if fruits.lower() == "apples":
        print("Our apples cost $3.80 per kg")
    elif fruits.lower() == "bananas":
        print("Our Bananas cost $1.72 per kg")
    elif fruits.lower() == "oranges":
        print("Our Oranges cost $3.56 per kg")
    else:
        print("Sorry, we don't sell that fruit here.")