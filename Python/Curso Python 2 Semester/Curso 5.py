archivo =open("list.txt", mode="r") #no es necesario poner el mode, solo el nombre, lo demas viene por default
#for line in archivo:
#    print(line)
#archivo.close
#print(archivo.read())
#archivo.close
for i, line in enumerate(archivo):
    print(i)
    line= line.split(' ')
    for word in line:
        print(word)
var= "un lobo domesticado"
var = var.split(' ')
var = enumarate(var)
print(var)
