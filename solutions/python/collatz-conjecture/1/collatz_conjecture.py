"""
number of steps for collatz conjecture
"""

def steps(number):
    """
    number of steps for collatz conjecture
    """
    if(number < 1):
        raise ValueError("Only positive integers are allowed")
    
    steps = 0
    num = number
    while(num > 1):
        if(num % 2 == 0):
            num = num / 2
            steps += 1
        else:
            num = (num * 3 + 1)
            steps += 1
        if(num == 1):
            break
    
    return steps
