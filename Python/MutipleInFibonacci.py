#Python Program for n\’th multiple of a number in Fibonacci Series
#nth multiple of k in fibonacci series except after 0

import sys
def multiplePosInFibo(n,k):
    a = 0
    b = 1
    count = 0
    i = 2
    while i != 0:
        c = a + b
        a = b
        b = c
        if( b % k == 0 ):
            count = count + 1
            if(count == n):
                print(f"{n}th multiple of {k} found at position {i} in fibonacci")
                sys.exit(0)
        i += 1
    print("No multiple found at specified position")


