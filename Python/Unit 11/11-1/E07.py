class Flavors():
    def __init__(self, first, second, third):
        self.first = str(first)
        self.second = str(second)
        self.third = str(third)

    def fave_flavor(self):
        if self.first.lower == "chocolate" or self.second.lower == "chocolate" or self.third.lower == "chocolate":

            print("Chocolate is one of my favorites too!")
        else:
            print("Do you not like chocolate?")

top_three = Flavors("Vanilla", "Chocolate", "Cookies 'n Cream")

top_three.fave_flavor()