import sympy
n=int(input("Enter an integer:"))
for i in range(n):
    print(sympy.isprime(n),end="")
