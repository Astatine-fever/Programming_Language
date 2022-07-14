# copy is used to copy the values inside a list to another list 
# this value will not be changed even if the list is deleted in the original list 

L=[10,20,30,40,50]
print(L)
M=L.copy()
L.clear()
print(M)
print(L)
