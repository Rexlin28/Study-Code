
public class Shirt {
    public int shirtID = 0;
    public String description = "-description required-";
    public char colorCode = 'U';
    public double price = 0.0;
    public int quantityInStock = 0;

    public void display() {
        System.out.println("Item ID: " + shirtID);
        System.out.println("Item description:" + description);
        System.out.println("Color Code: " + colorCode);
        System.out.println("Item price: " + price);
        System.out.println("Quantity in stock: " + quantityInStock);
    }
}
