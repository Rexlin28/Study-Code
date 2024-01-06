try:
    a=int(input('a= '))
    b=int(input('b= '))
    print(f'(a)/(b) = ',a/b)
except ZeroDivisionError:
    print("no dividir entre cero")
except:
    print("Ocurrio un error")
exit()
