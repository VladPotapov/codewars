# for get_count3
import re

# my code
VOWEL = "AaEeIiOoUu"


def get_count(input_str):
    num_vowels = 0
    # your code here
    for i in range(len(input_str)):
        if input_str[i] in VOWEL:
            num_vowels += 1

    return num_vowels

# codewars


def get_count2(input_str):
    return sum(1 for let in input_str if let in "aeiouAEIOU")


def get_count3(input_str):
    return len(re.findall('[aeiou]', input_str, re.IGNORECASE))


def get_count4(input_str):
    return sum(input_str.count(char) for char in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'])


def get_count5(input_str):
    return sum([i in list('aoeiuAOEIU') for i in input_str])


print(get_count5("TralyalyaUs Mikimaus"))
