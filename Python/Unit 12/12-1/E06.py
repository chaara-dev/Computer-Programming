class Movie_house:
    def __init__(self, name, one, two, three, four):
        self.name = name
        self.one = one
        self.two = two
        self.three = three
        self.four = four

    def __str__(self):
        return f"{self.name}: {self.one}, {self.two}, {self.three}, {self.four}"
    

movie_house1 = Movie_house("Uno", "Fast and Furious", "Pokemon", "Star Wars", "Revenge")
movie_house2 = Movie_house("Dos", "Slow and Docile", "Digimon", "Land Scuffles", "Forgiveness")
movie_house3 = Movie_house("Tres", "Frozen", "Liquid", "Steam", "Other")
movie_house4 = Movie_house("Quatro", "Melted", "Batman", "Wall-E", "Spider-Man")

house_list = [movie_house1, movie_house2, movie_house3, movie_house4]

for each in house_list:
    if each.one == "Frozen":
        print("That's my favorite movie!")
    else:
        continue