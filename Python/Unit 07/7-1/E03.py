def coinConvert(quarters, dimes, nickels):
    """
This function takes the given amount of each of the three coins, then returns them added all together for a total price.
    
Restrictions: Inputs cannot be strings.
"""
    quarterAnswer = 0.25 * quarters
    dimesAnswer = 0.10 * dimes
    nickelsAnswer = 0.05 * nickels

    print(quarterAnswer + dimesAnswer + nickelsAnswer)
    

coinConvert(2, 4, 0)
print(coinConvert.__doc__)