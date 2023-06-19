def checkName():
    givenName = input("Enter Your Name: ")

    if givenName == "becky" or givenName == "Becky":
        print("Becky! I've been looking for you!")
    else:
        print("I'm sorry", givenName, ", but I'm looking for Becky.")


print(checkName())