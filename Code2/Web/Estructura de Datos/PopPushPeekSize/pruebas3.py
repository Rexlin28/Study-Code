def expender_producto(producto, dinero):
 print("Expendiendo producto... Porfavor Espere")
 time.sleep(2)
 if dinero > producto['Precio']:
 cambio = dinero - producto['Precio']
 print(f"Gracias por comprar, aquí está su {producto['Producto']}")
 time.sleep(2)
 print(f"Su cambio es: {round(cambio,2)}€")
 else:
 print(f"Gracias por comprar aquí está su {producto['Producto']}")
 time.sleep(3)