# def high_and_low(numbers):
# ...
# return numbers

def high_and_low(numbers):
    word_list = numbers.split()

    num_list = [int(num)
                for num in filter(lambda num: num.isnumeric(), word_list)]

    print(num_list)


high_and_low(int("5 - 3 -7 0.2 5 + -2"))
