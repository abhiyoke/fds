#function to remove duplicate entries
def Remove(copy):
    list = []
    for num in copy:
        if num not in list:
            list.append(num)
    print(list) 
n=int(input("no. of books"))
lib={}
l=[]
copy=[]
c=int(0)
for i in range(0,n):
    bookno=int(input("enter the new book no.:"))
    copy.append(bookno)
    cost=int(input("enter the book cost "))
    if(cost>500):
        c = c + 1
    elif(cost<500):
        l.append(i+1)
    lib[cost]=bookno
print("list of book no. after deleting duplicates:")
Remove(copy) #function call

print("list of books in ascending order based on cost:")

for i in sorted(lib.items()):     #sorting the dictionary with respect to cost
    print(i)
    
print("books which have price less than 500:")
print(l)

print("no. of books which have price greater than 500:",c)
