def is_Armstrong(number):
    num_str = str(number)
    num_digit = len(num_str)

    sum_of_powers = sum(int(digit) ** num_digit for digit in num_str)

    return sum_of_powers == number

num = int(input("Enter a number : "))
if is_Armstrong(num):
    print(f"{num} is Armstrong Number")
else:
    print(f"{num} is not an Armstrong Number")