#Python program to print all Prime numbers in an Interval

import math
#Way to take two inputs using one input() can be done using split() and for loop
a,b = [int(x)for x in input("Enter Interval: ").split()]
for i in range(a,b+1):
    check = 0;
    for j in range(2,int(math.sqrt(i))):
        if(i % j == 0):
            check = 1
    if check == 0:
        print(i , end =" ") #end is used to print without newline in python by
                            #specifying and character in between " "
                            #here is space only
    
