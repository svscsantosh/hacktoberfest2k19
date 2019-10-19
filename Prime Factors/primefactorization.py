n=int(input("Enter a number"))
counter=0

for i in range(1,n):
    if(n%i)==0:
        for j in range(1,i):
            if(i%j==0):
                counter=counter+1
        if(counter==1):
            print(i)
        counter=0
