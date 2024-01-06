list = [x for x in range(1,10,2)]

S = [i for i in range (5)]
u=len(S)
for h in range (u):
    S[h]= h+list[h]
    h+=1
print(S)