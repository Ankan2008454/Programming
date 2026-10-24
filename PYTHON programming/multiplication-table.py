n=int(input("Enter no of rows"))
i=1
k=1
for i in range(1,n+1):
    j=1
    k=i
    for j in range(1,i+1):
        k=j*i
        print(k,end=" ")   
    print()