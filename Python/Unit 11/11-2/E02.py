class Farm:
    def __init__(self, chickens, pigs, cows, horses):
        self.chickens = chickens
        self.pigs = pigs
        self.cows = cows
        self.horses = horses

    def leg_count(self):
        total_legs = ((self.pigs + self.cows + self.horses) * 4) + (self.chickens * 2)
        print("Total legs:", total_legs)

    def __str__(self):
        return f"Chickens: {self.chickens}\nPig: Currently teaching web dev\nCows: {self.cows}\nHorses: {self.horses}"

country_farm = Farm(12, 6, 5, 3)

print(country_farm)
print()
country_farm.leg_count()
print()

if hasattr(country_farm, "goats"):
    pass
else:
    print("It's not a farm if it doesn't have goats!")