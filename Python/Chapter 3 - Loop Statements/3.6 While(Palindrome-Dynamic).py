A=input("Enter any string  :  ")
print(A)

B=""
i=len(A)-1
while(i>=0):
    B=B+A[i]
    i=i-1


print(B)

if(A==B):
    print("Given String is  palindrome")
else:
    print("Given String is not palindrome")
    



