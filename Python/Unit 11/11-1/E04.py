class School_building():
    def __init__(self, rooms, chairs, windows, doors):
        self.rooms = rooms
        self.chairs = chairs
        self.windows = windows
        self.doors = doors


school = School_building(10, 20, 3, 2)

def total_number(obj):
    total_rooms = getattr(obj, 'rooms')
    total_chairs = getattr(obj, 'chairs')
    total_windows = getattr(obj, 'windows')
    total_doors = getattr(obj, 'doors')

    all_chairs = total_rooms * total_chairs
    all_windows = total_rooms * total_windows
    all_doors = total_rooms * total_doors


    print("No. of rooms:", total_rooms)
    print("No. of chairs in each room:", total_chairs)
    print("No. of windows in each room:", total_windows)
    print("No. of doors in each room:", total_doors)
    print("Chair total:", all_chairs)
    print("Window total:", all_windows)
    print("Door total:", all_doors)

total_number(school)