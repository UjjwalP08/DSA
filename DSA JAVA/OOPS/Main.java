class Empolyee{
    String name;
    int age;

    // Non-parameterize Constructor(Defalut Constructor)
        Empolyee()
        {
            this.name = "Temp";
            this.age = 18;
        }

    // Parameterize Constructor
        Empolyee(String name,int age)
        {
            this.name = name;
            this.age = age;
        }
    
    // Copy Constructor
        Empolyee(Empolyee e1)
        {
            this.name = e1.name;
            this.age = e1.age;
        }

    public void printDetails()
    {
        System.out.println("Employee Name is "+this.name+" and Age is "+this.age);
    }

    // Example of Method Over-riding(Compile-time Polymorphism)
    public void poly(String str)
    {
        System.out.println("String type "+str);
    }
    public void poly(int i)
    {
        System.out.println("Interger type "+i);
    }
    public void poly(String str,int i)
    {
        System.out.println("String and Interger type");
    }
}

public class Main {

    public static void main(String[] args) {

        // Create the object of Pen Class
        // Pen obj = new Pen();

        // System.out.println(obj.color);
        // System.out.println(obj.type);
        // obj.color = "Green";
        // obj.penColor();
        
        Empolyee em1 = new Empolyee();
        Empolyee em2 = new Empolyee();
        Empolyee em3 = new Empolyee("Smit",22);
        Empolyee em4 = new Empolyee(em2);

        em1.name = "Ujjwal";
        em1.age = 20;

        // em1.printDetails();
        // em2.printDetails();
        // em3.printDetails();
        // em4.printDetails();

        em1.poly("Compile-time Polymorphism");
        em1.poly(4);
        em1.poly("Compiler with integer",4);


    }
    
}
