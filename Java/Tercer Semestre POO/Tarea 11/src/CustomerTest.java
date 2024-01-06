
public class CustomerTest {

    public static void main(String[] args) {
        Customer clienteUno = new Customer();
        Customer clienteDos = new Customer();
        
        clienteUno.setCustInfo(123, "Pepe", "Por Hay", 321);
        clienteDos.setCustInfo(456,"Carlos","Al Lado de ahi", 654, "correo@hotmail.com");
        
        clienteUno.displayInfo();
        clienteDos.displayInfo();
    }
    
}
