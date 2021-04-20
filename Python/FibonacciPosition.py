#Python Program for n-th Fibonacci number

a = 0
b = 1
d = int(input("Enter Position of fibonacci number you want: "))
c = 1
for i in range(2,d + 1):
    c = a + b
    a = b
    b = c
if(d == 0):
    c = 0
if(d == 1):
    c = 1
    
print (c)
