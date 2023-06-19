def ice_cream_stand(scoop_count, flavor):
    """Function takes the scoop count (parameter 1) for an ice cream cone, and calculates the total price based off the chosen flavor (parameter 2)
    Restrictions: 'scoop_count' must be a number, and 'flavor' must be a string"""
    VANILLA_PRICE = 2.50 # dollar per scoop
    CHOCOLATE_RPICE = 2.75 # dollars per scoop
    STRAWBERRY_PRICE = 3 # dollars per scoop

    if type(scoop_count) != int:
        print("Invalid scoop count.")
        return

    if flavor.lower() == "vanilla":
        print("Total Price:", VANILLA_PRICE * scoop_count)
    elif flavor.lower() == "chocolate":
        print("Total Price:", CHOCOLATE_RPICE * scoop_count)
    elif flavor.lower() == "strawberry":
        print("Total Price:", STRAWBERRY_PRICE * scoop_count)
    else:
        print("Invalid flavor.")

ice_cream_stand(2, "vanilla")
print(ice_cream_stand.__doc__)