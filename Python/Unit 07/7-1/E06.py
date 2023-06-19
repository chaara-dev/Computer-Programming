KID_RIDES_HEIGHT = 36
ROLLER_COASTER_HEIGHT = 48
CRAZY_BEACH_PARTY_HEIGHT = 52
DROP_ZONE_HEIGHT = 54
# All numbers for the constants are in inches.

def ride_height_checker(height):
    """Determines what ride a person can go on based on their height."""
    if height < KID_RIDES_HEIGHT:
        print("cannot ride the smallest ride.")
    elif height < ROLLER_COASTER_HEIGHT:
        print("cannot ride the rollercoaster ride.")
    elif height < CRAZY_BEACH_PARTY_HEIGHT:
        print("cannot ride the crazy beach party ride.")
    elif height < DROP_ZONE_HEIGHT:
        print("cannot ride the drop zone ride.")
    else:
        print("can ride all rides.")

ride_height_checker(50)
print(ride_height_checker.__doc__)