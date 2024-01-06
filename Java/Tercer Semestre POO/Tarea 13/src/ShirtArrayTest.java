
public class ShirtArrayTest {

    public static void main(String[] args) {
        Shirt [] camisas = new Shirt [3];
        /*for(int i=0; i<3; i++){
            camisas[i].displayShirtInformation();
        }*/
        System.out.println("****************************");
        camisas[0]= new Shirt (123, "Camisa de Tela", 'A', 99.99, 32);
        camisas[1]= new Shirt (321, "Sueter de Algodon", 'R', 32.50, 10);
        camisas[2]= new Shirt (567, "Saco de Tela", 'G', 150.99, 57);
        
        for(int i=0; i<3; i++){
            camisas[i].displayShirtInformation();
        }
    }
}
