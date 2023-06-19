import math

class Circle:
    def __init__(self, radius, diameter):
        self.radius = radius
        self.diameter = diameter
    
    def calculate_area(self):
        area = math.pi * (self.radius * self.radius)
        print("Area:", area)

    def calculate_circumference(self):
        circumference = 2 * math.pi * self.radius
        print("Circumference:", circumference)

class Square:
    def __init__(self, side_length):
        self.side_length = side_length
    
    def calculate_area(self):
        area = self.side_length * self.side_length
        print("Area:", area)
    
    def calculate_perimeter(self):
        perimeter = 4 * self.side_length
        print("Perimeter:", perimeter)
    
    def calculate_diagonal(self):
        diagonal = math.sqrt(2 * self.side_length)
        print("Diagonal:", diagonal)

class Triangle:
    def __init__(self, a_length, b_length, c_length, height):
        self.a_length = a_length
        self.b_length = b_length
        self.c_length = c_length
        self.height = height

    def calculate_area(self):
        area = 1 / 2 * self.height * self.b_length
        print("Area:", area)

    def calculate_perimeter(self):
        perimeter = self.a_length + self.b_length + self.c_length
        print("Perimeter:", perimeter)



circle1 = Circle(10, 20)
square1 = Square(4)
triangle1 = Triangle(4, 8, 10, 5)


tuple_input = (circle1, square1, triangle1)


def shapes_calculator(tup):
    what_shape = str(input("What shape do you want info on? (circle, square, triangle): "))

    if what_shape.lower() == "circle":
        print("")
        print("Here are the calculations available for Circle")
        print("1. Area")
        print("2. Circumference")
        circle__area_or_circumference = int(input("What number? (1, 2): "))

        if circle__area_or_circumference == 1:
            return circle1.calculate_area()
        elif circle__area_or_circumference == 2:
            return circle1.calculate_circumference()
        else:
            print("Sorry, we can't do that.")
    
    elif what_shape.lower() == "square":
        print("")
        print("Here are the calculations available for Square")
        print("1. Area")
        print("2. Perimeter")
        print("3. Diagonal")
        square__area_perimeter_or_diagonal = int(input("What number? (1, 2, 3): "))

        if square__area_perimeter_or_diagonal == 1:
            return square1.calculate_area()
        elif square__area_perimeter_or_diagonal == 2:
            return square1.calculate_perimeter()
        elif square__area_perimeter_or_diagonal == 3:
            return square1.calculate_diagonal()
        else:
            print("Sorry, we can't do that.")

    elif what_shape.lower() == "triangle":
        print("")
        print("Here are the calculations available for Triangle")
        print("1. Area")
        print("2. Perimeter")
        triangle__area_or_perimeter = int(input("What number? (1, 2): "))

        if triangle__area_or_perimeter == 1:
            return triangle1.calculate_area()
        elif triangle__area_or_perimeter == 2:
            return triangle1.calculate_perimeter()
        else:
            print("Sorry, we can't do that.")
    
    else:
        print("")
        print("Sorry, that's not a valid option.")

shapes_calculator(tuple_input)