# my code

def greet(name):
    return "Hello, " + name + " how are you doing today?"

# codewars

def greet2(name):
    return "Hello, {} how are you doing today?".format(name)

def greet3(name):
    return f'Hello, {name} how are you doing today?'

def greet4(name):
    return "Hello, %s how are you doing today?" % name

def greet5(name):
    return "Hello, {name} how are you doing today?".format(name = name)

print(greet5("Stas"))