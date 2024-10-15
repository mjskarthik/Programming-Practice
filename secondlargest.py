def find_second_largest(arr):
    # Initialize the largest and second largest to negative infinity
    largest = second_largest = float('-inf')

    for num in arr:
        # Update largest and second largest accordingly
        if num > largest:
            second_largest = largest
            largest = num
        elif num > second_largest and num != largest:
            second_largest = num

    # Check if the second largest was updated; if not, it means there is no second largest
    if second_largest == float('-inf'):
        return None  # No second largest element found
    else:
        return second_largest

# Taking array input from the user
n = int(input("Enter the number of elements in the array: "))
array = []

print("Enter the elements of the array:")
for _ in range(n):
    element = int(input())
    array.append(element)

# Find and print the second largest number
result = find_second_largest(array)

if result is None:
    print("There is no second largest element in the array.")
else:
    print("The second largest number in the array is:", result)
