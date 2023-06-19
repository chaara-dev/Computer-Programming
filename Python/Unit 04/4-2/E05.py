import math

SMALLRADIUS = 5
SMALLDIAMETER = SMALLRADIUS * 2

BIGRADIUS = 6
BIGDIAMETER = BIGRADIUS * 2


small = (1/4) * math.pi * (SMALLDIAMETER ** 2)
big = (1/4) * math.pi * (BIGDIAMETER ** 2)

print(big - small)