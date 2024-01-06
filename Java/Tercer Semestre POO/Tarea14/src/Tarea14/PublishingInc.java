package Tarea14;


public class PublishingInc {

    public static void main(String[] args) {
        int contador=0,gerente;
        Empleado empleados[] = new Empleado[100];       
        empleados[contador] =new EmpleadoEscritor("Josh","Guionista",123,3);
        contador++;
        empleados[contador] = new EmpleadoGerente("Gerry","Gerente general",321, 5);
        gerente=contador;
        contador++;
        empleados[contador]= new EmpleadoIlustrador("Daniel","Chief Photoshop",456,2);
        contador++;
       
        for(int i=0; i<empleados[gerente].displayList(); i++){
            empleados[i].displayInfo();
        }
        
    }
    
}
