class Bookshelf():
    def __init__(self, scifi, mystery, adventure, romance):
        self.scifi = scifi
        self.mystery = mystery
        self.adventure = adventure
        self.romance = romance

    def __str__(self):
        output = f"Number of sci-fi books: {self.scifi}\nNumber of mystery books: {self.mystery}\nNumber of adventure books: {self.adventure}\nNumber of romance books: {self.romance}"
        
        return output

object = Bookshelf(1, 4, 2, 0)

print(object)