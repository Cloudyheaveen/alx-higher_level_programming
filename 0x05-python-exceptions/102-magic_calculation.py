#!/usr/bin/python3
def magic_calculation(a, b):
    x = 0
    for y in range(1, 3):
        try:
            if y > a:
                raise Exception('Too far')
            else:
                x += (a ** b) / y
        except Exception:
            x = b + a
            break
    return (x)
