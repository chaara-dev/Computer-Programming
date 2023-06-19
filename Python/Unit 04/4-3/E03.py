APPLE_WEIGHT = 151 #grams
# 1000 grams is 1 kilogram
APPLES_PER_TREE = 480 #apples


def apple_profit(apple_trees):
    TOTAL_APPLE_WEIGHT = APPLE_WEIGHT * APPLES_PER_TREE
    totalPrice = (apple_trees *(TOTAL_APPLE_WEIGHT / 1000)) * 3.80
    totalPrice_round = round(totalPrice, 2)
    totalPrice_twoDecimal = format(totalPrice_round, ".2f")

    print("$", totalPrice_twoDecimal)
    

apple_profit(1)