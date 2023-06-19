class Tuple_Time:
    def __init__(self, tuple1, tuple2):
        self.tuple1 = tuple1
        self.tuple2 = tuple2

    def __str__(self):
        first_second_number = self.tuple1[1]
        second_second_number = self.tuple2[1]
        # roundabout, no?
        if first_second_number < 10 and second_second_number < 10:
            return f"{self.tuple1[0]}:{self.tuple1[1]}0\n{self.tuple2[0]}:{self.tuple2[1]}0\n({self.tuple1}, {self.tuple2})"
        elif self.tuple1[1] < 10:
            return f"{self.tuple1[0]}:{self.tuple1[1]}0\n{self.tuple2[0]}:{self.tuple2[1]}\n({self.tuple1}, {self.tuple2})"
        elif self.tuple2[1] < 10:
            return f"{self.tuple1[0]}:{self.tuple1[1]}\n{self.tuple2[0]}:{self.tuple2[1]}0\n({self.tuple1}, {self.tuple2})"
        else:
            return f"{self.tuple1[0]}:{self.tuple1[1]}\n{self.tuple2[0]}:{self.tuple2[1]}\n({self.tuple1}, {self.tuple2})"


test = Tuple_Time((1, 0), (2, 13))

print(test)