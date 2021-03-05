#Python Program for How to check if a given number is Fibonacci number?

import sys  #sys is imported to use sys.exit("message") statement can be 0
            #if don't want to give any message
a = 0
b = 1
d = int(input("Enter Position of fibonacci number you want: "))
c = 1
if(d == 0 or d == 1):
    print("Yes")
    sys.exit(0) # here it will terminate whole program after it
for i in range(2,d + 1):
    c = a + b
    a = b
    b = c
    if ( c == d ):
        print("Yes")
        sys.exit(0)  # here it will terminate whole program after it
        
print("No")
