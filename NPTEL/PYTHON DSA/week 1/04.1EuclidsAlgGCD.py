def gcd(m,n):
    if(m<n):
        (m,n)=(n,m)
    if(m%n==0):
        return n
    else :
        diff=m-n
        return (gcd(max(n,diff),min(diff,n)))        

m=int(input("enter a natural number "))
n=int(input("enter another natural number "))
x= gcd(m,n)
print(x)            