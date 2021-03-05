#Fibonacci series

def fibonacci(n):
    a = 0
    b = 1
    c = 1
    print(a,b, sep = " ", end = " ") #sep is used to seperation by inserting anything
                                     #between two or more variable using in print()
    for i in range(n - 2):
        c = a + b
        a = b
        b = c
        print(c, end = " ")

