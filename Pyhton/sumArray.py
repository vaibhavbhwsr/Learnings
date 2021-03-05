#Python Program to find sum of array

def sumArray(a):
    sum = 0
    for i in a:
        sum += i;
    print(f"Sum of Array is: {sum}")

a = [1,2,3,4,5]
sumArray(a)
