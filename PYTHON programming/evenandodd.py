a=[]
n=int(input("Range"))
i=0
o=[]
e=[]
while i<n:
    a.append(input("enter no"))
    if int(a[i])%2==0:
        e.append(a[i])
    else:
        o.append(a[i])
    i+=1
for odd in o:
    print(odd)
for even in e:
    print(even)