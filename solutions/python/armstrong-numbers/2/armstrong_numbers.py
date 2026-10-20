"""
armstrong number
"""
def is_armstrong_number(number):
    """
    return true if a number is an amstrong number
    """
    numbers_string = str(number)
    total = 0
    length = len(numbers_string)
    for num in numbers_string:
        total += (int(num) ** length)

    if total == number:
        return True
    return False
    
