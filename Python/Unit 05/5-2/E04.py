def is_rainbow(color):
    color = color.lower()
    return (
        color == "red" or
        color == "orange" or
        color == "yellow" or 
        color == "green" or 
        color == "blue" or
        color == "indigo" or
        color == "violet"
        )
    
def not_rainbow(color):
    color = color.lower()
    return (
        color != "red" and
        color != "orange" and
        color != "yellow" and 
        color != "green" and 
        color != "blue" and
        color != "indigo" and
        color != "violet"
        )
    
print(is_rainbow("Red"))
print(not_rainbow("BLUE"))