def zero_fuel(distance_to_pump, mpg, fuel_left):
    return distance_to_pump <= mpg * fuel_left

res = zero_fuel(100, 50, 3)

print(res)

input("\nEnter")