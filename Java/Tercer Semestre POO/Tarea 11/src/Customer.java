
public class Customer {
    int id;
    String name;
    String address;
    int number;
    String email;
    public void setCustInfo(int ID, String nombre, String direccion, int numero){
        id = ID;
        name = nombre;
        address = direccion;
        number = numero;
    }
    public void setCustInfo(int ID, String nombre, String direccion, int numero, String correo){
        id = ID;
        name = nombre;
        address = direccion;
        number = numero;
        email = correo;
    }
    public void displayInfo(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+address);
        System.out.println("Number: "+number);
        System.out.println("Email: "+email);
        System.out.println("*******************");
    }
}
