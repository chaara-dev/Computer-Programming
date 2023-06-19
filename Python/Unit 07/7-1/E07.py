def larger_cube(cube1_1, cube1_2, cube1_3, cube2_1, cube2_2, cube2_3):
    """Takes the dimentions of two seperate cubes, finds which one has more area, and returns the larger cube"""

    def cube_calculator():
        return cube1_1 * cube1_2 * cube1_3 > cube2_1 * cube2_2 * cube2_3

    if cube_calculator() == True:
        print("Cube 1 is the bigger cube.")
    elif cube_calculator() == False:
        print("Cube 2 is the bigger cube.")


larger_cube(2, 7, 3, 4, 5, 6)