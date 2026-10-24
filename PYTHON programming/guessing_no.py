import random
num=random.randint(1,10)
guess=int(input("Guess a no betw 1 and 10"))
while guess!=num:
    if guess>num:
        print("You have guessed a higher no ")
    elif guess<num:
        print("you have guessed a lower no")
    guess=int(input("Guess again: "))
print("You got the no congrats")