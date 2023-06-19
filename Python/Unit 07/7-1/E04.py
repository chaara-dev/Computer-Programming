def add_n_multiply(num1, num2, num3):
    """This function takes three numbers, and returns the sum and the product of those numbers.
    
    Restrictions: Inputs cannot be strings, or anything other than numbers
    """
    print("SUM:", num1 + num2 + num3)
    print("PRODUCT:", num1 * num2 * num3)

add_n_multiply(2, 3, 4)
print("")
print(add_n_multiply.__doc__)