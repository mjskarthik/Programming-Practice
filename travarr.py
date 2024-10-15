def traverse_array(arr):
    return arr

n = int(input("Enter the size of the array: "))
array = []
print("Enter the elements of the array: ")

for _ in range(n):
    element = int(input())
    array.append(element)

result_array = traverse_array(array)
print("Resulant Array: ", result_array)
