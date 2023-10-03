public class Circle {
    private double radius;
    private String color;

    public Circle(){
        radius  = 1.0;
        color   = "red";
    }

    public Circle(double r){
        radius  = r;
        color   = "red";
    }

    public Circle(double r, String c){
        radius  = r;
        color   = c;

    }

    public double getRadius(){
        return radius;
    }

    public String getcolor(){
        return color;
    }
        
    public double getArea(){
        return radius*radius*Math.PI;
    }

    //print
    public static void main(String[] args){
        System.out.println("Cetak Method Overloading \n");
        Circle lingkaran    = new Circle();
        System.out.println("radius = "+lingkaran.radius +"\n"+ "color = "+lingkaran.color);
        //----
        System.out.println("\n");
        //----
        Circle lingkaran1   = new Circle(2.0);
        System.out.println("radius = "+ lingkaran1.radius + "\n"+ "color = "+ lingkaran1.color);
        //----
        System.out.println("\n");
        //----
        Circle lingkaran2   = new Circle(3.0, "biru");
        System.out.println("radius = "+ lingkaran2.radius + "\n"+ "color = "+ lingkaran2.color);

        System.out.println("\nCetak Public Method\n");

        //1
        Circle c1   = new Circle();
        System.out.println(c1.getRadius());
        System.out.println(c1.getcolor());
        System.out.println(c1.getArea());
        System.out.println("\n");

        //2
        Circle c2   = new Circle(2.0);
        System.out.println(c2.getRadius());
        System.out.println(c2.getcolor());
        System.out.println(c2.getArea());
        System.out.println("\n");

        //3
        Circle c3   = new Circle(3.0, "biru");
        System.out.println(c3.getRadius());
        System.out.println(c3.getcolor());
        System.out.println(c3.getArea());
        System.out.println("\n");

    }


}