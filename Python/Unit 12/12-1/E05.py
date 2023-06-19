class Home_measurements:
    def __init__(self, name, length, width, height):
        self.name = name
        self.length = length
        self.width = width
        self.height = height

    def __str__(self):
        return f"{self.name}: [{self.length}, {self.width}, {self.height}]"

    def surface_area(self):
        sq_feet = 2 * ((self.width * self.length) + (self.height * self.length) + (self.height * self.width))

        print(sq_feet, "sq. ft")

bedroom = Home_measurements("Bedroom", 18, 17, 10)
bathroom = Home_measurements("Bathroom", 9, 12, 10)
living_room = Home_measurements("Living Room", 19, 19, 10)
dining_room = Home_measurements("Dining Area", 15, 12, 10)

living_room.surface_area()

# I'm getting different results, but I did it.