print("There are two boxes labeled BOX 1 and BOX 2")
print("You are given the chance to pick one of the two boxes...")
boxNumber = int(input("Enter the number of your chosen box: "))

if boxNumber == 1:
    print("BOX 1 has a basket of chocolate chip cookies in it.")
    print("What do you want to do with the basket?")
    print("1. Eat all the cookies in the basket.")
    print("2. Give the basket to your friend, Bob.")
    print("\n")
    choice = int(input("Enter the number of your choice: "))
    if choice == 1:
        print("You ate the cookies.")
        print("They tasted great.")
    elif choice == 2:
        print("You gave the basket full of cookies to your friend, Bob.")
        print("Bob gave you $10 in thanks!")
    else:
        print("That is not a valid choice. The box has been taken away from you.")

elif boxNumber == 2:
    print("BOX 2 has a basket of chocolate chip cookies in it... BUT WITH ANTS!")
    print("What do you want to do with the basket?")
    print("1. Eat all the cookies and eat the ants too.")
    print("2. Give the ants to your friend, Bob, and keep the cookies for yourself.")
    print("\n")
    choice = int(input("Enter the number of your choice: "))
    if choice == 1:
        print("You ate the cookies and the ants, they wriggled around in your mouth.")
        print("You feel sick.")
    elif choice == 2:
        print("You gave Bob a handful of ants, then ran away with the cookies.")
        print("You and Bob are no longer friends.")
    else:
        print("That is not a valid choice. The ants are angry now and are out for your blood.")

else:
    print("There is no such thing as BOX", boxNumber, ". Due to your poor choice, both boxes have exploded, killing you.")