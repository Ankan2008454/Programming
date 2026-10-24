n=int(input("Enter no of rows"))
for i in range(n,0,-1):
    for j in range(i,n):
        print(end=" ")  
    for i in range(1,i+1):
        print("*",end=" ")
    print()
for i in range(1,n+1):
    for j in range(i,n):
        print(end=" ")  
    for i in range(1,i+1):
        print("*",end=" ")
    print()