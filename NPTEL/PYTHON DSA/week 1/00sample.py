def g(m,n):
    res = 0
    while m >= n:
        (res,m) = (res+1,m/n)
    return(res)  
n=3.27194694971
print(g(375,n))    

