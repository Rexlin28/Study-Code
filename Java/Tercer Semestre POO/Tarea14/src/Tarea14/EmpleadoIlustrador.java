package Tarea14;

public class EmpleadoIlustrador extends Empleado{
    private String habilidades;
    
    public EmpleadoIlustrador(String nombre, String puesto, int id, int nivel){
        super(nombre, puesto, id, nivel); 
    }
    
    public void getAbility(String habilidades){
        this.habilidades = habilidades;
    }
    
    public void setAbility(){
        System.out.println("Habilidades: "+this.habilidades);
    }
}