n=int(input("Enter no of rows"))
k=1
i=0
for i in range(1,n+1):
    j=1
    for j in range(i):
        print(k,end="")
    k+=1   
    print()


