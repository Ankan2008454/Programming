s=input("Enter a string")
d,l,o=0,0,0
for i in s:
    if i.isdigit():
       d+=1
    elif i.isalpha():
       l+=1
    else:
       o+=1
print(f"Digits: {d}")
print(f"letters: {l}")
print(f"special charcters: {o}")