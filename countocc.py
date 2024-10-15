def count_occurences(arr):
    counts = {}

    for num in arr:
        if num in counts:
            counts[num] += 1
        else:
            counts[num] = 1

    return counts

n = int(input("Enter the size of the array: "))
array = []
print("Enter the elements of the array: ")
for _ in range(n):
    element = int(input())
    array.append(element)

occurence_counts = count_occurences(array)
print("Occurencees of each element: ")
for element, count in occurence_counts.items():
    print(f"{element}: {count}")