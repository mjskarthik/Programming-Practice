# This is a Python Program for finding the Intersection of 2 Arrays
# It is simple to write in Python

def find_intersection(arr1, arr2):
    return list(set(arr1) & set(arr2))

# Taking input from the user
n1 = int(input("Enter the size of the First Array:  "))
array1 = []
print("Elements of the first array : ")
for i in range(n1):
    element = int(input())
    array1.append(element)

n2 = int(input("Enter the size of the Second Array: "))
array2 = []
print("Elements of the Second Array: ")
for i in range(n2):
    element = int(input())
    array2.append(element)

result = find_intersection(array1, array2)
print("Intersection: ", result)


