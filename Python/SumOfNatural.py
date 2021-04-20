#Python Program for Sum of squares of first n natural numbers

n = int(input("Enter a number "))
sum = 0

for i in range(n + 1):
    sum += i*i

print(f"Sum of square of n natural no. is: {sum}")
