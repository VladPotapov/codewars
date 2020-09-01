# -*- coding: utf-8 -*-

# my code
def fake_bin(x):
    y = ""

    if int(x) > 0:
        for i in range(len(x)):
            if int(x[i]) >= 5:
                y += "1"
            else:
                y += "0"

        y, x = x, y

    return x

# codewars

def fake_bin2(x):
    return ''.join('0' if c < '5' else '1' for c in x)

