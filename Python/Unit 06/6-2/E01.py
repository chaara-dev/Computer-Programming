char = input("Enter a vowel: ").lower()

if char == "a" or "e" or "i" or "o" or "u":
    if char == "a":
        print("a is for APPLE")
    elif char == "e":
        print("e is also for APPLE")
    elif char == "i":
        print("i is also for APPLE")
    elif char == "o":
        print("o is also for APPLE")
    elif char == "u":
        print("u is also for APPLE")
else:
    print("Not a vowel.")