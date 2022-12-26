n=int(input("no. of terms in poly A:"))
m=int(input("no. of terms in poly B:"))
e=int(input("no. for which polynomial will be evaluated:"))
p=[]
q=[]
x=[]
mu=[]
s=0
for i in range(0,n):
  l1=[]
  a=int(input("enter coeff.:"))
  b=int(input("enter power:"))
  l1.append(a)
  l1.append(b)
  p.append(l1)
  s=s+a*(pow(e,b))
  
for i in range(0,m):
  l2=[]
  a=int(input("enter coeff.:"))
  b=int(input("enter power:"))
  l2.append(a)
  l2.append(b)
  q.append(l2)
i=int(0)
j=int(0)
d=int(0)
print("evaluation for polynomial A at value",e,"is:",s)
while(i<n and j<m):
 if(p[i][1]==q[j][1]):
   l3=[]
   l3.append(p[i][0]+q[j][0])
   l3.append(p[i][1])
   x.append(l3)
   d=d+1
   i=i+1
   j=j+1
 elif(p[i][1]>q[j][1]):
   x.append(p[i])
   d=d+1
   i=i+1
 elif(p[i][1]<q[i][1]):
   x.append(q[i])
   d=d+1
   j=j+1
if(i==n and j<m):
  for k in range(j,m):
    x.append(q[k])
    d=d+1
elif(j==m and i<n):
  for k in range(i,n):
    x.append(p[k])
    d=d+1
print("addition is:")
for i in range(0,d):
  print(x[i])
for i in range(0,(n+m+1)):
   l=[]
   l.append(0)
   l.append(i)
   mu.append(l)
for i in range(0,n):
  for j in range(0,m):
    x=int(0)
    x=p[i][1]+q[j][1]
    mu[x][0]=mu[x][0]+(p[i][0]*q[j][0])
    
print("multiplication is:")
for i in range(0,(n+m+1)):
    print(mu[i])
