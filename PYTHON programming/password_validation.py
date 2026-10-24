#program to check for password validity it includes
#min 7 characters
#max 20 characters
#At least one letter between [A-Z] and 1 letter between [a-z]
#At least one number
#At least one character from [$#@!]
import re
pwd=input("Enter the password")
pwd_len=len(pwd)
is_valid=False
while True:
    if pwd_len<7 or pwd_len>20: break
    elif not re.search('[A-Z]',pwd): break
    elif not re.search('[a-z]',pwd): break
    elif not re.search('[$#@!]',pwd): break
    elif re.search('\s', pwd): break
    else:
        is_valid=True
        break
if is_valid:
    print("Password is valid.")
else:
    print("Password is invalid.")