#Python program to check whether a number is Prime or not

import math

a = int(input("Enter a no."))
check = 0
if(a == 1):
    check = 1;
for i in range(2,int(math.sqrt(a)) + 1):
    if(a % i == 0):
        check = 1

if( check != 1 ):
    print("Prime Number")
else:
    print("Not Prime Number")
               
                   
