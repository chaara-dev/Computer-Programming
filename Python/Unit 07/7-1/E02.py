def teenager(age):
    """Function returns 'Yes' if age given is a teenager (13-19).
    The age cannot be 0, or anything less than 0."""
    if age >= 13 and age <= 19 and age > 0:
        print("Yes")
    else:
        print("No")

teenager(16)
print(teenager.__doc__)