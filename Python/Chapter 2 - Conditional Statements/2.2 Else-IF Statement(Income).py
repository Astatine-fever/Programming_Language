i=int(input("Enter Your Income :"))

if(i>=30000):
    print("You are rich family")

elif((i>=20000) & (i<30000)):
    print("You are middle class family")

elif((i>=10000) & (i<20000)):
    print("You are poor family")
else:
    print("You are in below poverty line") 
    
