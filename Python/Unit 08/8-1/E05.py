def speed_calculator():
    distance = int(input("Enter Distance: "))
    time = int(input("Enter time: "))

    while distance < 0:
        distance = int(input("Enter valid Distance: "))
    while time < 0:
        time = int(input("Enter valid time: "))

    speed = (distance / 1000) / (time / 3600)
    print("your speed is", speed, "meters per second")

speed_calculator()