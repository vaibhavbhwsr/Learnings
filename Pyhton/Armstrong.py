#Python Program to check Armstrong Number
a = int(input("Enter a no."))
b = a
n = 0
while b:
    b = b // 10
    n += 1
b = a
arm = 0
while b:
    rem = b % 10
    arm = arm + pow(rem,n)
    b //= 10
if (arm == a):
    print(f"{arm} Yes it is Armstrong")
else:
    print(f"{arm} No it is not Armstrong")
