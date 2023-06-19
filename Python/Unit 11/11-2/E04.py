class Road:
    def __init__(self, name, length_km, width_km, lane_count):
        self.name = name
        self.length_km = length_km
        self.width_km = width_km
        self.lane_count = lane_count

    def convert(self):
        kilometers = True
        choice = str(input("Length or Width? "))

        while choice != "length" and choice != "width":
            print("That isn't a choice. please try again:")
            choice = str(input("Length or Width? "))

        if choice == "length":
            if kilometers == True:
                self.length_km = self.length_km * 1000
                kilometers = False
                print(f"Meters: {self.length_km}")
            elif kilometers == False:
                self.length_km = self.length_km / 1000
                kilometers = True
                print(f"Kilometers: {self.length_km}")
        elif choice == "width":
            if kilometers == True:
                self.width_km = self.width_km * 1000
                kilometers = False
                print(f"Meters: {self.width_km}")
            elif kilometers == False:
                self.width_km = self.width_km / 1000
                kilometers = True
                print(f"Kilometers: {self.width_km}")
    
    def calculate_lane_width(self):
        print("Lane Width: ", int(self.width_km) / int(self.lane_count))

highway = Road("Trans Canada", 7821, 15, 4)

highway.convert()
highway.calculate_lane_width()