package Tarea14;


public class Empleado {
    private String nombre="";
    private String puesto="";
    private int id=0;
    private int nivel=0;
    private int contador;
    
    Empleado(String nombre, String puesto, int id, int nivel){
        this.nombre = nombre;
        this.puesto = puesto;
        this.id = id;
        this.nivel = nivel;
        this.contador++;
    }
    public int getContador(){
        Empleado prueba = new Empleado("prueba","prueba",1234,0);
        this.contador--;S
        return prueba.contador-1;
    }
    
    public void setPosition(){
        System.out.println("Puesto: "+puesto);
    }
    public void displayInfo(){
        System.out.println("Nombre: "+nombre);
        System.out.println("Puesto: "+puesto);
        System.out.println("ID: "+id);
        System.out.println("Nivel: "+nivel);
        System.out.println("****************");
    }
}
