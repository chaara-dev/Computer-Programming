fruit_names = ("Apple", "Banana", "Cherry", "Grape", "Watermelon")
fruit_prices = (4.36, 1.65, 4.40, 4.43, 2.50)

veggies_names = ("Carrot", "Celery", "Potato", "Onion", "Tomato")
veggies_prices = (2.46, 2.65, 1.54, 2.67, 2.80)


going_to_buy = str(input("Do you want to buy fruit or vegetables: "))

if going_to_buy.lower() == "fruit":
    fruit_name = str(input("Name: "))
    fruit_weight = int(input("Weight: "))

    if fruit_name in fruit_names:
        fruit_index = fruit_names.index(fruit_name)
        fruit_price = fruit_prices[fruit_index]

        print("")
        print("Your total is:", (fruit_weight * fruit_price), "dollars.")
    elif fruit_name not in fruit_names:
        print("Sorry, that's not a valid fruit.")

elif going_to_buy.lower() == "vegetable":
    veggie_name = str(input("Name: "))
    veggie_weight = int(input("Weight: "))

    if veggie_name in veggies_names:
        veggie_index = veggies_names.index(veggie_name)
        veggie_price = veggies_prices[veggie_index]

        print("")
        print("Your total is:", (veggie_weight * veggie_price), "dollars.")

else:
    print("Sorry, I can't do that.")