def get_planet_name(id):
    # my code
    name = {
        1 : "Mercury",
        2 : "Venus",
        3 : "Earth",
        4 : "Mars",
        5 : "Jupiter",
        6 : "Saturn",
        7 : "Uranus",
        8 : "Neptune"
    }
    return name[id]

def get_planet_name2(id):
    # оптимальный код
    return ["Mercure", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"][id-1]

planeta1 = get_planet_name(7)
planeta2 = get_planet_name2(5)
print(planeta1)
print(planeta2)

input("\nEnter")