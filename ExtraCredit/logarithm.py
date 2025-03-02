"""
Write a program that displays the log of 10000 to the base 10,
and the log of 1024 to the base 2.

Cannot use log2 or log10 functions.
Only use the log function from the math module.

"""
from math import log

if __name__ == "__main__":
    ...
    
   
    log_base_10 = log(10000) / log(10)
    
   
    log_base_2 = log(1024) / log(2)
    
    print("Log base 10 of 10000:", log_base_10)
    print("Log base 2 of 1024 :", log_base_2)
