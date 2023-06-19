import math
def findWrappingPaperAmount(ballRadius, wrappingPaperLength, wrappingPaperWidth):
    def ballSurfaceArea():
        return 4 * math.pi * ballRadius ** 2
    def centimetersToFeet():
        wrappingPaperLengthFEET = wrappingPaperLength / 30.48
        wrappingPaperWidthFEET = wrappingPaperWidth / 30.48
        print(math.ceil(ballSurfaceArea() / wrappingPaperWidthFEET / wrappingPaperLengthFEET))

    (centimetersToFeet())


findWrappingPaperAmount(3, 50, 70)