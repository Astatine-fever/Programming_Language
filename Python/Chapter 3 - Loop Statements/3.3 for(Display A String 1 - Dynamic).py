#  for....loop using in string manipulation:

y=input("Type your sentence as lengthy : ")
print(len(y))

c=0
for z in y:
    if(z==' '):
        c=c+1

print("Total number of spaces in given string  :  ",c)    
