import math


def factorial(x):
    if x == 0 or x == 1:
        return 1
    return x * factorial(x - 1)


term = lambda n, x: ((-1) ** n) * (x ** (2 * n + 1)) / factorial(2 * n + 1)

def sine_x(n, x):
    x_rad = math.pi * x / 180 
    return sum(term(i, x_rad) for i in range(n))


harmonic_sum = 0

def harmonic(n):
    """
    Recursively calculates the harmonic number H_n and stores result in global variable `harmonic_sum`.
    Does not return anything.
    """
    global harmonic_sum
    if n == 0:
        return
    harmonic(n - 1)
    harmonic_sum += 1 / n
