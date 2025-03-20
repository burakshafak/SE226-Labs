

import random


letter_replacements = {}

for _ in range(5):
 
    
    while True:
        

        letter = input("Enter a lowercase character: ").strip().lower()
        
        
        if letter in letter_replacements or len(letter) > 1:
            print("Invalid. Choose another one.")
            continue
        break

    replacements = set()
    while len(replacements) < 3:
        replacement = input(f"Enter a replacement for '{letter}': ").strip()
        if len(replacement) == 1 and replacement not in replacements:
            replacements.add(replacement)
        else:
            print("Invalid input. Enter a unique single character.")

    letter_replacements[letter] = list(replacements)

print("\nLetter Replacement Dictionary:", letter_replacements)


passwords = []
characters = "abcdefghijklmnopqrstuvwxyz"

for _ in range(5):
    password = "".join(random.choice(characters) for _ in range(12))
    passwords.append(password)

print("\nGenerated Passwords (Before Replacement):")
for pwd in passwords:
    print(pwd)


categorized_passwords = {"strong": [], "weak": []}

for pwd in passwords:
    new_password = []
    replaced_count = 0

    for char in pwd:
        
        if char in letter_replacements:
            new_password.append(random.choice(letter_replacements[char]))
            replaced_count += 1
        else:
            new_password.append(char)

    new_password = "".join(new_password)

    if replaced_count > 4:
        categorized_passwords["strong"].append(new_password)
    else:
        categorized_passwords["weak"].append(new_password)


print("\nSTRONG PASSWORDS:")
for pwd in categorized_passwords["strong"]:
    print(pwd)

print("\nWEAK PASSWORDS:")
for pwd in categorized_passwords["weak"]:
    print(pwd)

