#!/usr/bin/python3
# Author - ARAHOU ABIR
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return (None)
    else:
        max_integer = my_list[0]
        for a in range(len(my_list)):
            if my_list[a] > max_integer:
                max_integer = my_list[a]
        return (max_integer)
