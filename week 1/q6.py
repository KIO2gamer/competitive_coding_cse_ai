def is_armstrong_string(number):
    num_str = str(number)
    num_digits = len(num_str)
    
    total_sum = sum(int(digit) ** num_digits for digit in num_str)
    
    return total_sum == number

user_num = int(input("Enter a number: "))
if is_armstrong_string(user_num):
    print(f"{user_num} is an Armstrong number.")
else:
    print(f"{user_num} is NOT an Armstrong number.")
