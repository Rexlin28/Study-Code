x=[1,2,3,4,5]
aux=1
resu=[0,0,0,0,0]

for i in range (len(x)):
    for j in range(len(x)):
        if i!=j:
            aux= x[j]*aux
    resu[i]=aux
    aux=1
print(resu)

product=1
e=1
for e in x:
    product *=e

for e in x:
    print(product//e)
