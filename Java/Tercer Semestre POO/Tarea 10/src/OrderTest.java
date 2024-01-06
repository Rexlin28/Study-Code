
public class OrderTest {

    public static void main(String[] args) {
        Order orden = new Order();
        Shirt camisa = new Shirt();
        
        camisa.price=14.00;
        orden.addShirt(camisa);
        System.out.println("Total amount for the order is: "+orden.totalPrice);
        
        Shirt playera= new Shirt(), sueter = new Shirt();
        playera.price = 23.25;
        orden.addShirt(playera);
        System.out.println("Total amount for the order is: "+orden.totalPrice);
        sueter.price = 21.50;
        orden.addShirt(sueter);
        System.out.println("Total amount for the order is: "+orden.totalPrice);
    }
    
}
