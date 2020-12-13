# my code
def array_plus_array(arr1, arr2):
    # складывает сумму 2 массивов
    return sum(arr1 + arr2)

# codewars


def array_plus_array2(x, y): return sum(x) + sum(y)


def array_plus_array3(arr1, arr2):
    return sum(i for a in [arr1, arr2] for i in a)


a = [2, 3, 5]
b = [10, 1, 0]
print(array_plus_array3(a, b))
