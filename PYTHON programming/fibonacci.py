n=int(input("Enter the no"))
a=0
b=1
for i in range(0,n):
    c=a+b
    print(a,end=" ")
    a=b
    b=c
