num=[1,2,3,4,5]
i=0
while i in range(len(num)+1):
    del num[0::2]
    print(num)
    i=i+1
print("[]")
