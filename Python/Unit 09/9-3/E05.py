def sequence_average(sequence):
    i = 0
    sequence_sum = sum(sequence)

    print(sequence_sum / len(sequence))

my_numbers = [23, 48, 2, 116, 77, 94]

sequence_average(my_numbers)

my_numbers.append(1001)

sequence_average(my_numbers)