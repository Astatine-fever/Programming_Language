t=int(input("Enter your tenth total : "))
if(t>=400):
    print("You are selected for A group ")

elif((t>350) & (t<400)):
    print("You are selected for B group ")

elif((t>300) & (t<=350)):
    print("you are selected for C group")

elif((t>=250) & (t<=300)):
    print("you are selected for D group")
else:
    print("you are not eligible for 11th std ")
