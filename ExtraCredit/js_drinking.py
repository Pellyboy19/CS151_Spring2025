"""
Write a program that asks the user if they have their ID (yes or no).
If the user has their ID, ask the user if they are 21 years or older (yes or no).
If the user is 21 years or older, display to the user that they can drink.
If the user is less than 21 years old, display to the user that they cannot drink.
If the user does not have their ID, display to the user that they cannot drink.
If the user does not input yes or no, display to the user they cannot drink.
"""

if __name__ == "__main__":
    ...
    has_id = input("Do you have your ID? (yes or no): ").lower()
    if has_id == "yes":
        is_21 = input("Are you 21 years or older? (yes or no): ").lower()
        if is_21 == "yes":
            print("You can drink.")
        else:
            print("You cannot drink.")
    else:
        print("You cannot drink.")
