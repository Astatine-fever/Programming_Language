a=[1,2,3,4,5]
b=list(input("Enter a Value"))

for i in a:
    if(i==b):
        print("already exist")
    elif(i!=b):
        i=i+b;    
print(i)