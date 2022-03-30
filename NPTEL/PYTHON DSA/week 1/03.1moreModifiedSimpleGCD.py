def gcd(m,n):
    i=min(m,n)
    while i>0:
        if((m%i==0) and (n%i==0)):
            return i
        else:
            i=i-1    
    

m=int(input("enter a natural number "))
n=int(input("enter another natural number "))
x= gcd(m,n)
print(x)   