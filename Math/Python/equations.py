import numpy as np #For mathematical operations
import matplotlib.pyplot as plt #For graph plotting

#Define function blocks
"""def ():
    start = input("Enter the starting x-intercept")
    stop = input("Enter the stopping x-intercept")
    num = input("The precision of the x axis")
    #Indicate the starting, ending x axis with default 100 incremental steps
    x = np.linspace(int(start),int(stop),100)
    return x
"""
def linear():
    print("Linear equation: y = mx + c")
    m = input("Enter the slope")
    c = input ("Enter the y intercept")
    start = input("Enter the starting x-intercept")
    stop = input("Enter the stopping x-intercept")
    num = input("The precision of the x axis")
    #Indicate the starting, ending x axis with default 100 incremental steps
    x = np.linspace(int(start),int(stop),100)
    y = int(m)*x + int(c)
    #plotting the points
    plt.plot(x,y)
    
    #naming the x axis
    plt.xlabel('x-axis')

    #naming the y axis
    plt.ylabel('y-axis')

    #giving title to the graph
    plt.title("Linear")

    #function show the plot
    plt.show()

def quadratic():
    #print("Entering quadratic equations: y = ax^(2) + bx + c")
    #()    
    x = np.linspace(-10,10,100)
    a = input("Enter the a value")
    b = input("Enter the b value")
    c = input("Enter the y-intercept")
    y = int(a)*x**2 + int(b)*x + int(c)
    plt.plot(x,y)
    plt.show()
def cubic():
    #()
    x = np.linspace(-10,10,100)
    y = x**3
    plt.plot(x,y)
    plt.show()
def trigonometric():
    #In radians
    x = np.linspace(-np.pi,np.pi,100)
    phi = input("Enter phase shift")
    #Phi is converted to radians i.e. pi/180
    y = np.sin(x-int(phi)*np.pi/180)
    plt.plot(x,y)
    plt.show()
    
def exponent():
    x = np.linspace(-10,10,100)
    y  = np.exp(x)
    plt.plot(x,y)
    plt.show()
