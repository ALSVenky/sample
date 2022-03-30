# using while loop
def gcd(m,n):
    if (m<n):
        m,n=n,m
    while(m%n!=0):
        diff=m-n
        m,n=max(n,diff),min(n,diff)
    return n    
        

m=int(input("enter a natural number "))
n=int(input("enter another natural number "))
x= gcd(m,n)
print(x)             