#!/usr/bin/python3
# Author - ARAHOU ABIR
def weight_average(my_list=[]):
    if my_list and len(my_list):
        number = 0
        denom = 0
        for tupl in my_list:
            num += (tupl[0] * tupl[1])
            denom += (tupl[1])
        return (number/denom)
    return 0
