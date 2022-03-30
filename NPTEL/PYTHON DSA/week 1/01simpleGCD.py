

def gcd(m,n):
    fm=[] #factors of m 
    fn=[]  #factors of n that are less than or equal to m
    for i in range(1,m+1):
        if(m%i==0):
            fm.append(i)
    for j in range(1,m+1):
        if(n%j==0):
            fn.append(j)        
    cf=[] #common factors
    for f in fm:
        if f in fn:
            cf.append(f)

    return cf[-1]
m=int(input("enter a natural number "))
n=int(input("enter another natural number greater than the previous number "))

x= gcd(m,n)
print(x)
