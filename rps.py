import random

choices = ["Rock", "Paper", "Scissors"]

try:
    user = int(input("Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\n"))
    if user not in [0, 1, 2]:
        print("Invalid choice!")
        exit(1)
except ValueError:
    print("Invalid input!")
    exit(1)

computer = random.randint(0, 2)

print(f"You: {choices[user]}")
print(f"Computer: {choices[computer]}")

if user == computer:
    print("Draw!")
elif (user == 0 and computer == 2) or (user == 1 and computer == 0) or (user == 2 and computer == 1):
    print("You Win!")
else:
    print("You Lose!")
