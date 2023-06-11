#!/usr/bin/python3
# Author - ARAHOU ABIR 
def print_reversed_list_integer(my_list=[]):
    if my_list:
        for a in reversed(my_list):
            print('{:d}'.format(a))
