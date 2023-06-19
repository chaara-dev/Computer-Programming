first_part_alphabet = "ABCDEFGHIJKLM"
second_part_alphabet = "NOPQRSTUVWXYZ"

def num_to_letter(num):
    num = int(num)

    if type(num) == int and 0 <= num <= 26:
        if num <= 13:
            return str(first_part_alphabet[num])
        else:
            return str(second_part_alphabet[num - 14])
    else:
        return "Invalid input"

print(num_to_letter(20))