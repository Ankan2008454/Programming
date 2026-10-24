n=int(input("Enter height of pyramid"))
for i in range(1,int((n+1)/2)+1):
    j=1
    for j in range(i):
        print("*",end="")   
    print()
j=int((n+1)/2)
for i in range(j-1,0,-1):
    for k in range(i,0,-1):
        print("*",end="")
    print()