def remove_duplicates(arr):
    result = []
    seen = set()

    for num in arr:
        if num not in seen:
            result.append(num)
            seen.add(num)

    return result

n = int(input("Enter the number of elements in the array: "))
array = []
print("Enter the elements of the array: ")
for _ in range(n):
    element = int(input())
    array.append(element)

unique_array = remove_duplicates(array)
print("Array after removing the duplicates: ", unique_array)