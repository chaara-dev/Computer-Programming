class Eyes:
    def __init__(self, color, shape, vision):
        self.color = color
        self.shape = shape
        self.vision = vision

    def __str__(self):
        return f"Eyes: {self.color}, {self.shape}, {self.vision[0]}/{self.vision[1]}"

class Hair:
    def __init__(self, color, length, type):
        self.color = color
        self.length = length
        self.type = type

    def __str__(self):
        return f"Hair: {self.color}, {self.length}, {self.type}"

class Foot:
    def __init__(self, length, width, shoe_size):
        self.length = length
        self.width = width
        self.shoe_size = shoe_size

    def __str__(self):
        return f"Foot: {self.length}, {self.width}, {self.shoe_size}"


strange_eyes = Eyes("pink", "oval", [20, 20])
strange_hair = Hair("blue", "3 feet", "straight")
strange_foot = Foot(30, 15, 80)

prompt_one = str(input("Which body part do you want info for? (eyes, hair, foot): "))
accepted_list_one = ["eyes", "hair", "foot"]
eyes_list = ["color", "shape", "vision"]
hair_list = ["color", "length", "type"]
foot_list = ["length", "width", "shoe size"]

if prompt_one.lower() in accepted_list_one:
    if prompt_one.lower() == "eyes":
        prompt_two = str(input("What specific info about the eyes do you wish to see? (color, shape, vision): "))
        if prompt_two.lower() in eyes_list:
            if prompt_two.lower() == "color":
                print(strange_eyes.color)
            elif prompt_two.lower() == "shape":
                print(strange_eyes.shape)
            elif prompt_two.lower() == "vision":
                print(strange_eyes.vision)
        else:
            print("Sorry, I can't do that.")
    elif prompt_one.lower() == "hair":
        prompt_two = str(input("What specific info about the hair do you wish to see? (color, length, type): "))
        if prompt_two.lower() in hair_list:
            if prompt_two.lower() == "color":
                print(strange_hair.color)
            elif prompt_two.lower() == "length":
                print(strange_hair.length)
            elif prompt_two.lower() == "type":
                print(strange_hair.type)
        else:
            print("Sorry, I can't do that.")
    elif prompt_one.lower() == "foot":
        prompt_two = str(input("What specific info about the foot do you wish to see? (length, width, shoe size): "))
        if prompt_two.lower() == "length":
            print(strange_foot.length)
        elif prompt_two.lower() == "width":
            print(strange_foot.width)
        elif prompt_two.lower() == "shoe size":
            print(strange_foot.shoe_size)
    else:
        print("Sorry, I can't do that.")
else:
    print("Sorry, I can't do that.")