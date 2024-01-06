package Tarea14;


public class EmpleadoGerente extends Empleado{
    
    public EmpleadoGerente(String nombre, String puesto, int id, int nivel){
        super(nombre, puesto, id, nivel); 
    }
    
    public int displayList(){
        int counter = getContador();
        return counter;
    }
}
