def letter_info(userInput):
    print("Character:", userInput)
    print("Letter:", userInput.isalpha())
    print("Uppercase:", userInput.isupper())
    print("Lowercase:", userInput.islower())
    print("Number:", userInput.isdigit())
    print("Blank:", userInput.isspace())
    
letter_info("A")