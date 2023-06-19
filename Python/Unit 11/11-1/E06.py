class Fruits():
    def __init__(self, apples, bananas, oranges):
        self.apples = apples
        self.bananas = bananas
        self.oranges = oranges
    
    def fruit_sum(self):
        print(f"Apples: {self.apples}")
        print(f"Bananas: {self.bananas}")
        print(f"Oranges: {self.oranges}")
        print(f"Total No. of fruits: {self.apples}" +  f"{self.bananas}" + f"{self.oranges}")


basket = Fruits(4, 12, 9)

basket.fruit_sum()