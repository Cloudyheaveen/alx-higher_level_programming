#!/usr/bin/python3
# Author - ARAHOU ABIR
def print_sorted_dictionary(a_dictionary):
    for key in sorted(a_dictionary.key()):
        print('{}: {}'. format(key, a_dictionary[key]))
