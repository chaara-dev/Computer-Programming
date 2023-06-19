def count_bananas(apples, bananas, oranges):
    if bananas > apples + oranges:
        print("The number of bananas you are buying is MORE than apples and oranges combined.")
    elif bananas < apples + oranges:
        print("The number of bananas you are buying is LESS than apples and oranges combined.")
    elif bananas == apples + oranges:
        print("The number of bananas you are buying is EQIAL to the amount of apples and oranges combined.")

def count_apples(apples, bananas, oranges):
    if apples > bananas + oranges:
        print("The number of apples you are buying is MORE than bananas and oranges combined.")
    elif apples < bananas + oranges:
        print("The number of apples you are buying is LESS than bananas and oranges combined.")
    elif apples == bananas + oranges:
        print("The number of apples you are buying is EQIAL to the amount of bananas and oranges combined.")


count_bananas(10, 20, 15)
count_apples(10, 20, 15)