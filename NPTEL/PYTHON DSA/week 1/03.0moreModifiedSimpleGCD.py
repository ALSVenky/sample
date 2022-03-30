def gcd(m,n):
    # lcf=1 #initializing large commom factor as 1
    for i in range(1,min(m,n)+1):
        if((m%i==0) and (n%i==0)):
            lcf=i

    return lcf

m=int(input("enter a natural number "))
n=int(input("enter another natural number "))
x= gcd(m,n)
print(x)    