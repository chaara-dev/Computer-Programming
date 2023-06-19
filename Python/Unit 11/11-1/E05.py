class People():
    def __init__(self, num_boys, num_girls):
        self.num_boys = num_boys
        self.num_girls = num_girls

student_group = People(17, 18)

def number_of_clothes(group_of_people):
    total_people = getattr(group_of_people, 'num_boys') + getattr(group_of_people, 'num_girls')
    shirts = total_people
    socks = total_people * 2
    shoes = total_people * 2
    shorts = getattr(group_of_people, 'num_boys')
    skirts = getattr(group_of_people, 'num_girls')

    print("Boys:", shorts)
    print("Girls:", skirts)
    print("Shirts total:", shirts)
    print("Socks total:", socks)
    print("Shoes total:", shoes)
    print("Shorts total:", shorts)
    print("Skirts total:", skirts)

number_of_clothes(student_group)