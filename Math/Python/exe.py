import sys
import equations

#input from command line; sys.argv states the py title
text = input("Welcome to sys.argv! please input: \n") 

#map the inputs to the function blocks
options = {
           1:equations.linear,
           2:equations.quadratic,
           3:equations.cubic,
           4:equations.trigonometric,
           5:equations.exponent,
}

#Check if the user has input between 1 and 5 inclusively
if  int(text) > 5 or int(text) < 1:
    raise Exception(" Your input should be 1 to 5 inclusive.")
else:
    options[int(text)]()

