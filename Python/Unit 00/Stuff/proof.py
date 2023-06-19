def volume02(a, b, c):
    return a * b * c

# Only (1) division symbol
print("Answer F:", volume02(590, 236, 276) / volume02(8, 12, 10))
# Gives the answer: [40031.5] (WRONG)

print("")

def volume01(a, b, c):
    return a * b * c

# (2) division symbols
print("Proper Answer (A):", volume01(590, 236, 276) // volume01(8, 12, 10))
# Gives the answer: [40031] (CORRECT)