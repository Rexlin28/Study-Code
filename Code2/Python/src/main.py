from utils import file_utils

#Entrada de Datos
name = input("Name: ")
last_name= input("Last name: ")

user = {
    "name": name,
    "last_name": last_name
}



file_name = input("File Name: ")

file_utils.write_file(file_name, user)

readed_file = file_utils.read_file(file_name)

print(readed_file)