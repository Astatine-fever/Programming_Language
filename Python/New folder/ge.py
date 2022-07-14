a=int(input("Enter any value : "))
b=int(input("Enter any value : "))
c=int(input("Enter any value : "))

if((a>b) & (a>c)):
    print(" a is big")
elif((b>a) & (b>c)):
    print(" b is big")
elif((c>b) & (c>a)):
    print(" c is big")
else:
    print(" all are  same")            
            
