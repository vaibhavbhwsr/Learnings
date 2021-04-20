# Python does not have built-in support for Arrays,
# but Python Lists can be used instead.

#Python Program to find largest element in an array


def findMaxInArray(a):
    max = a[0]
    for i in range(1,len(a)): #len is used to get the size of list
        if(max > a[i]):
            continue
        else:
            max = a[i]
    print(f"Largest element in array is {max}")

a = [5,3,4,1,2,7]
findMaxInArray(a)
