def func1(n):
   
    c=str(n)
    a=len(c)
    d=0
    for i in range(a):
        d=d+int(c[i])**a
    if(d==n):
            print("Armstrong Number")
    else:
            print("Not an Amstrong Number")
a=int(input("enter a number to see if the number is an amstrong number or not"))
if(a>0):
    func1(a)
else:
    print("Invalid Input ")
    a=int(input("enter a number to see if the number is an amstrong number or not"))
    func1(a)
