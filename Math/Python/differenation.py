from sympy import *
import numpy as np
string = input("Enter the equation to differentiate")
x = Symbol('x')
#Differantiate from the string, one variable differentiation.
y = diff(string)
print(y)

