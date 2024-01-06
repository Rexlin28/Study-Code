package tarea.pkg1;

public class Tarea1 {
    
    public static void main(String[] args) {
       Cliente clienteUno = new Cliente();
       clienteUno.printInformation();
       System.out.println("*****************");
       clienteUno.identifierID=1234;
       clienteUno.status='E';
       clienteUno.numeroCompras=14;
       clienteUno.printInformation();
    }
}
