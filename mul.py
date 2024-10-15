def print_multiples(number, limit):
    multiple = number
    while multiple <= limit:
        print(multiple,end=' ')
        multiple += number

num = int(input("Enter a number: "))
upto = int(input("Enter the limit: "))
print(f"Multiples of {num} upto {upto} are: ")
print_multiples(num,upto)