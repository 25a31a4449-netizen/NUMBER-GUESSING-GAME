#let us build random number guessing game in python
import random

lowest_num=1
highest_num=100
answer=random.randint(lowest_num,highest_num)
guesses=0
is_running=True

print("Welcome to number guessing game in python " )
print(f"I selected a number between {lowest_num} to {highest_num} take a guess.")


while is_running:

    guess=input(f"Please enter the number b/w {lowest_num} to {highest_num}:")

    if guess.isdigit():
        guess=int(guess)
        guesses+=1
        if guess<lowest_num or guess>highest_num:
            print("Guess is out of range")
            guess=input(f"Please enter the number b/w {lowest_num} to {highest_num}:")
        elif guess<answer :
            print("The guess is too low!!")
        elif guess>answer:
            print("The guess is too high!!")
        else:
            print("YES!! YOU CRACK IT.")
            is_running=False
            print(f"The number of guesses you took is {guesses} to guess the number {answer}.")

    else:
        print("Not a valid guess")
        print(f"please select a number between {lowest_num} to {highest_num}")