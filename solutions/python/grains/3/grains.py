"""
calculates the number of rice grains on a chessboard
"""

def square(number):
    """
    the number of rice grain on a specific square of the chessboard
    """
    if(number < 1 or number > 64):
        raise ValueError("square must be between 1 and 64")
    return 2 ** (number - 1)


def total():
    """
    the total number of rice grain on the chessboard"""
    # the sum of all squares
    grains = 0
    for case in range(1, 65):
        grains += square(case)
    return grains
