#Python Program for factorial of a number
a = int(input("Enter a no. "))
fact = 1
for i in range(1, a+1):
    fact *= i  
print(f"Factorial of {a} is: {fact}")


"""
Python is mindblowing it can also give you
factorial for 9999 or may be even more.
Actually python has something called Arbitrary precision integers or
Virtually Unbounded and that why it has no limit for max size of any
datatype like int
"""
