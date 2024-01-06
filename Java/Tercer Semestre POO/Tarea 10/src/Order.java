
public class Order {
    public double totalPrice = 0.0; 
    
    public double addShirt (Shirt s) {
        totalPrice = totalPrice + s.price;
        return totalPrice;
    }
}
