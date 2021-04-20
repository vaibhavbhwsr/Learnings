#Python Program for compound interest
#import math
p = int(input("Enter Principle: "))
r = int(input("Enter Rate: "))
t = int(input("Enter Time: "))
CI = p * pow((1 + r/100),t)
print(f"Compound Interest is: {CI - p}")

