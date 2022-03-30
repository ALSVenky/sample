# -*- coding: utf-8 -*-

m=int(input("enter a natural number "))
n=int(input("enter anpther natural number "))
while(m!=n):
    if (m>n):
        m=m-n
    else:
        n=n-m
print(m)    