#!/usr/bin/python3
# Author - ARAHOU ABIR
def multiple_returns(sentence):
    if sentence != '':
        First_character = sentence[0]
    else:
        First_character = None
    return (len(sentence), First_character)
