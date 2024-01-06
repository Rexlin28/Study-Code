
public class Shirt {
    private int ID;
    private String description;
    private char colorcode;
    private double price;
    private int quantityInStock;
    Shirt(int shirtID, String shirtDescription, char shirtColorcode, double shirtPrice,
           int shirtQuantityInStock){
        ID = shirtID;
        description = shirtDescription;
        colorcode = shirtColorcode;
        price = shirtPrice;
        quantityInStock = shirtQuantityInStock;
    }
    
    public void displayShirtInformation(){
        System.out.println("ID: "+ID);
        System.out.println("Description: "+description);
        System.out.println("Colorcode: "+colorcode);
        System.out.println("Price: "+price);
        System.out.println("Quantity In Stock: "+quantityInStock);
        System.out.println("****************************");
    }
}
