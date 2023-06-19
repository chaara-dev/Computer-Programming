def index_model(sequence, element):
    sequence = str(sequence).lower()
    element = str(element).lower()
    
    if element not in sequence:
        print("False")
    elif element in sequence:
        print(sequence.index(element))

my_list =[3, 1, 4, 1, 5, "p", "i"]

index_model(my_list, 1)
index_model(my_list, "i")
index_model(my_list, "e")