// import java.util.*;

class Mobile
    {
        String brand_name;
        String type;
        int price;

        public void disp()
        {
            System.out.println("Brand Name: "+ brand_name + " , " + "Type: " + type + " , " + "Price: " + price);
        }
    }


public class codejava {
    public static void main(String[] args) {
        Mobile obj = new Mobile();
        obj.brand_name = "Samsung";
        obj.type = "Smartphone";
        obj.price = 80000;

        Mobile obj1 = new Mobile();
        obj1.brand_name = "Apple";
        obj1.type = "Smartphone";
        obj1.price = 100000;

        Mobile obj2 = new Mobile();
        obj2.brand_name = "OnePlus";
        obj2.type = "Smartphone";
        obj2.price = 50000;

        obj.disp();
        obj1.disp();
        obj2.disp();
        
    }
}
