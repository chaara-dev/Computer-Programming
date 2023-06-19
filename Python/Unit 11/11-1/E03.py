class Date():
    def __init__(self, month, day, year):
        self.month = month
        self.day = day
        self.year = year

    def __str__(self):
        if self.day > 31 or self.day < 0:
            if self.month == 1:
                self.month = "January"
            elif self.month == 2:
                self.month = "Febuary"
            elif self.month == 3:
                self.month = "March"
            elif self.month == 4:
                self.month = "April"
            elif self.month == 5:
                self.month = "May"
            elif self.month == 6:
                self.month = "June"
            elif self.month == 7:
                self.month = "July"
            elif self.month == 8:
                self.month = "August"
            elif self.month == 9:
                self.month = "September"
            elif self.month == 10:
                self.month = "October"
            elif self.month == 11:
                self.month = "November"
            elif self.month == 12:
                self.month = "December"
            else:
                self.month = "Unknown"
            return f"{self.month} {self.year}"
        else:
            if self.month == 1:
                self.month = "January"
            elif self.month == 2:
                self.month = "Febuary"
            elif self.month == 3:
                self.month = "March"
            elif self.month == 4:
                self.month = "April"
            elif self.month == 5:
                self.month = "May"
            elif self.month == 6:
                self.month = "June"
            elif self.month == 7:
                self.month = "July"
            elif self.month == 8:
                self.month = "August"
            elif self.month == 9:
                self.month = "September"
            elif self.month == 10:
                self.month = "October"
            elif self.month == 11:
                self.month = "November"
            elif self.month == 12:
                self.month = "December"
            else:
                self.month = "Unknown"
            return f"{self.month} {self.day} {self.year}"

birthday = Date(7, 80, 2006)

print(birthday)

# Messy, yeah I know