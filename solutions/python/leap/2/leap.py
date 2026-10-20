"""
leap year
"""
def leap_year(year):
    """
    is the year a leap year
    """
    return (year%4) == 0 and (((year%100) != 0) or ((year%100) == 0 and (year%400) == 0))
