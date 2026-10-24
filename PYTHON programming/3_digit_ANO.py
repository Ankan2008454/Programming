n=int(input("Enter three digit no"))
s=0
k=n
while n!=0:
    d=n%10
    s=s+d**3
    n=n//10
if k==s:
    print("It is an armstrong no")
else:
    print("It is not a armstrong no")
