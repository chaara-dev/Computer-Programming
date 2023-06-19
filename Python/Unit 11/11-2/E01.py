class Apples():
    def __init__(self, number, color, individual_weight):
        self.number = number
        self.color = color
        self.individual_weight = individual_weight

    def convert_weight(self):
        weight_in_grams = self.individual_weight / 1000
        print(weight_in_grams)

    def find_total_weight(self):
        total_weight = self.number * self.individual_weight
        print(total_weight)

    def __str__(self):
        return f"Number of apples: {self.number}\nColour: {self.color}\nWeight: {self.individual_weight}"


basket = Apples(150, "red", 100)

print(basket)
basket.find_total_weight()
basket.convert_weight()
print(hasattr(basket, "color"))
print(isinstance(basket, Apples))