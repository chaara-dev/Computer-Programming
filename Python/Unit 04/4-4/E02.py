import math
def calculateBoxVolume(x, y, z):
    roomVolume =  590 * 236 * 276
    boxVolume = x * y * z
    final = roomVolume / boxVolume
    print(math.floor(final), "boxes can fit in the room.")

calculateBoxVolume(8, 12, 10)