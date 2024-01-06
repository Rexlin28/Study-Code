package Tarea14;


public class EmpleadoEditor extends Empleado{
    private String habilidades;
    private String preferencia;
    
    public EmpleadoEditor(String nombre, String puesto, int id, int nivel){
        super(nombre, puesto, id, nivel); 
    }
    
    public void getAbility(String habilidades){
        this.habilidades = habilidades;
    }
    
    public void getPreference(String preferencia){
        this.preferencia = preferencia;
    }
    public void setAbility(){
        System.out.println("Habilidades: "+this.habilidades);
    }
    public void setPreference(){
        System.out.println("Habilidades: "+this.preferencia);
    }
}
