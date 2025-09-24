
# Get input from the user for the two numbers
try:
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
except ValueError:
    print("Invalid input. Please enter numerical values.")
else:
    # Compare the two numbers and print the greatest
    if num1 > num2:
        print(f"{num1} is the greatest.")
    elif num2 > num1:
        print(f"{num2} is the greatest.")
    else:
        print("Both numbers are equal.")num1_str = input("Enter the first number: ")
num1 = float(num1_str)
num2_str = input("Enter the second number: ")
num2 = float(num2_str)

if num1 > num2:
    print(f"{num1} is the greatest number.")
elif num2 > num1:
    print(f"{num2} is the greatest number.")
else:
    print("Both numbers are equal.")