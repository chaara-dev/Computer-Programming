CAR_RATES = 19 # per day
SUV_RATES = 27 # per day
VAN_RATES = 36 # per day

numberOfPeople = int(input("Enter the number of people: "))

def showRates():
    print("\n")
    print("Vehicle Rental Rates ->")
    print("Car:", CAR_RATES)
    print("SUV:", SUV_RATES)
    print("Van:", VAN_RATES)

if numberOfPeople <= 4:
    print("You will need a car.")
    wantToSee = input("Do you want to see our rates? ").lower()
    if wantToSee == "yes":
        showRates()
    elif wantToSee == "no":
        print("ok.")
elif numberOfPeople > 4 and numberOfPeople <= 7:
    print("You will need an SUV.")
    wantToSee = input("Do you want to see our rates? ").lower()
    if wantToSee == "yes":
        showRates()
    elif wantToSee == "no":
        print("ok.")
elif numberOfPeople > 7 and numberOfPeople <= 12:
    print("You will need a Van.")
    wantToSee = input("Do you want to see our rates? ").lower()
    if wantToSee == "yes":
        showRates()
    elif wantToSee == "no":
        print("ok.")