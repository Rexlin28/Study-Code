package tarea.pkg1;

public class Cliente {
    public int identifierID=0;
    public char status='N';
    public int numeroCompras=0;
    
    public void printInformation(){
        System.out.println("ID: "+identifierID);
        System.out.println("Status: "+status);
        System.out.println("Compras Totales: "+numeroCompras);
    }
}
