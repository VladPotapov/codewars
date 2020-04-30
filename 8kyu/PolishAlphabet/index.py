def correct_polish_letters(st): 
    # your code here
    polish_Alphabet = "ą, ć, ę, ł, ń, ó, ś, ź, ż".split(', ')
    english_Alphabet = "a, c, e, l, n, o, s, z".split(', ')
    arr = []

    for i in range(len(st)):
        arr += st[i]

    if polish_Alphabet[0] in arr:

correct_polish_letters("Jędrzej Błądziński")