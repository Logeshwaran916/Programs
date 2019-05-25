s=input()
L=[]
str1 = ''
i = 0
for i in str:
  if i not in L:
    L.append(i)
str1=''.join(L)
Length1=len(s)
Length2=len(str1)
if(Length1 - Length2 == 0):
  print("yes")
else:
  print("No")
