# -*- coding: utf-8 -*-
marks = [2, 5, 13, 20, 16, 16, 10]

# my code


def get_average(marks):
    N = len(marks)
    summa = 0

    for i in range(N):
        summa += marks[i]

    return summa // N


# codewars
def get_average2(marks):
    return sum(marks) // len(marks)


get_average(marks)
