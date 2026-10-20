"""
armstrong number
"""
def is_armstrong_number(number):
    """
    return true if a number is an amstrong number
    """
    numbersAsString = str(number)
    sum = 0
    length = len(numbersAsString)
    for num in numbersAsString:
        sum += (int(num) ** length)

    if sum == number:
        return True
    return False
    
