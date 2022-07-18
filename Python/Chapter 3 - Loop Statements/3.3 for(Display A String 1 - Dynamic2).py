#  for....loop using in string manipulation:

y=input("Type your sentence as lengthy : ")
print(len(y))

x=input("Enter your character for calculate the count : ")
c=0
for z in y:
    if(z==x):
        c=c+1
    print("Total number of count in given string  :  ",c)   

 
