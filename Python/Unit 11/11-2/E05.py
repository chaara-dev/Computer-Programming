class Bodystats:
    def __init__(self, name, sex, birth_year, eyeclr, hairclr, height, weight, shoes):
        self.name = name
        self.sex = sex
        self.birth_year = birth_year
        self.eyeclr = eyeclr
        self.hairclr = hairclr
        self.height = height
        self.weight = weight
        self.shoes = shoes

    def age(self):
        current_year = int(input("Enter current year: "))
        print("Approximate age:", (current_year - self.birth_year), "years old.")

    def convert(self):
        stat_choice = str(input("Convert weight or height? "))

        if stat_choice.lower() == "height":
            height_measure_choice = str(input("To inches or centimeters? "))

            if height_measure_choice.lower() == "inches": # (in)
                self.height_in = self.height / 2.54
                print(f"{round((self.height_in / 12), 2)} feet.")

            elif height_measure_choice.lower() == "centimeters": # (cm)
                self.height = self.height * 2.54
                print(f"{round(self.height, 2)} centimeters.")
        
        elif stat_choice.lower() == "weight":
            weight_measure_choice = str(input("To kilograms or pounds? "))

            if weight_measure_choice.lower() == "kilograms": # (kg)
                self.weight = self.weight / 2.205
                round(2, self.weight)
                print(f"{round(self.weight, 2)} kg")

            elif weight_measure_choice.lower() == "pounds": # (lbs)
                self.weight = self.weight * 2.205
                round(self.weight)
                print(f"{round(self.weight, 2)} lbs")

    def shoe_size(self):
        if self.sex[0].lower() == "m":
            self.shoes = self.shoes - 0.5
            print(f"UK size: {self.shoes}")
        elif self.sex[0].lower() == "f":
            self.shoes = self.shoes - 2
            print(f"UK size: {self.shoes}")




#                   name   sex  year   eyes    hair  height weight shoes
tyler = Bodystats("Tyler", "M", 2006, "green", "brown", 172, 51, 10)

tyler.age()
tyler.convert()
tyler.shoe_size()