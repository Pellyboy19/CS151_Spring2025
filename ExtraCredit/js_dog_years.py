"""
Write a program that prompts the user to enter their age.
Display to the user their age in dog years.

Type your code after the ellipsis (...) below.

Run your program using the run button or
type the following in your terminal:

python ExtraCredit/dog_years.py

or

python dog_years.py

"""

if __name__ == "__main__":
    ...
  
    human_age = int(input("Please enter your age: "))

   
    dog_years = human_age * 7

 
    print(f"You are {dog_years} years old in dog years!")
    age: int = int(input("Enter your age: "))
    dog_years: int = age * 7
    print(f"Your age in dog years is: {dog_years}")
