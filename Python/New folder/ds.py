a=int(input("Enter any value : "))
b=int(input("Enter any value : "))
c=int(input("Enter any value : "))

if(a<b<c):
    print(" C is big")
elif(a<c<b):
    print(" b is big")
elif(b<c<a):
    print(" a is big")
else:
    print(" all are  same")            
            