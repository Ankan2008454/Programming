n=int(input("Enter the no"))
c=0;
for i in range (1,int((n+1)/2)+1):
    if n%i==0:
        c+=1
if(c==1):
    print("it is a prime no")
else:
    print("It is not a prime no")

