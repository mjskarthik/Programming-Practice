def find_kth_largest(arr, k):
    # Sort the array in descending order
    sorted_arr = sorted(arr, reverse=True)
    # Return the k-th largest element
    return sorted_arr[k - 1]

# Taking array input from the user
n = int(input("Enter the number of elements in the array: "))
array = []

print("Enter the elements of the array:")
for _ in range(n):
    element = int(input())
    array.append(element)

k = int(input("Enter the value of k (the position of the largest element to find): "))

# Find and print the Kth largest number
if k <= n and k > 0:
    result = find_kth_largest(array, k)
    print(f"The {k}th largest element in the array is: {result}")
else:
    print("Invalid value for k.")
