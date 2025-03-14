"""
Write a program that askes the user if they have their ID (yes or no).
If the user has their ID, ask the user if they are 21 years or older (yes or no).
If the user is 21 years or older, display to the user that they can drink.
If the user is less than 21 years old, display to the user that they cannot drink.
If the user does not have their ID, display to the user that they cannot drink.
If the user does not input yes or no, display to the user they cannot drink.
"""


    if __name__ == "__main__":

    id_response = input("Do you have your ID? (yes or no): ").strip().lower()

    if id_response == "yes":
       
        age_response = input("Are you 21 years or older? (yes or no): ").strip().lower()
        
        if age_response == "yes":
            print("You can drink.")
        elif age_response == "no":
            print("You cannot drink.")
        else:
            print("You cannot drink.")
    
    elif id_response == "no":
        print("You cannot drink.")
    
    else:
        print("You cannot drink.")
