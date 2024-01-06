def test_expender_producto():
 producto = {'Codigo': 10, 'Producto': 'Doritos TexMex', 'Precio': 1.30}
 dinero = 2.00
 assert expender_producto(producto, dinero) == 0.50