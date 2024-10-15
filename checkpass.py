def CheckPassword(s, n):
    if n < 4:
        return 0  # Password must be at least 4 characters long
    if s[0].isdigit():
        return 0  # Password cannot start with a digit

    cap = 0  # Counter for uppercase letters
    nu = 0   # Counter for digits

    for i in range(n):
        if s[i] == ' ' or s[i] == '/':
            return 0  # Password cannot contain spaces or slashes
        if 'A' <= s[i] <= 'Z':  # Check for uppercase letters
            cap += 1
        elif s[i].isdigit():  # Check for digits
            nu += 1

    if cap > 0 and nu > 0:  # Password must contain at least one uppercase letter and one digit
        return 1  # Valid password
    else:
        return 0  # Invalid password

s = input("Enter your password: ")
a = len(s)
print(CheckPassword(s, a))
