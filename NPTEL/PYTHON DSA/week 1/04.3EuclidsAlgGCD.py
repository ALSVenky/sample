def gcd(m,n):
    if m<n:
        m,n=n,m
    if(m%n==0): #or simply if m%n:
        return n
    else :+
        return gcd(n,m%n)   

m=int(input("enter a natural number "))
n=int(input("enter another natural number "))
x= gcd(m,n)
print(x)    

#while loop
# while(m%n!=0):
#     m,n=(n,m%n)  #m%n always less than n
# return n    
