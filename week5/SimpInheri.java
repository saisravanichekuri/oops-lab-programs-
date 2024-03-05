class bird
{ 
    public void eat()
    {
        System.out.println("I can eat.");
    }
    public void sleep()
    {
        System.out.println("I can sleep.");
    }
}
class Peacock extends bird
{
    public String name="peacock";
    public void display()
    {
        System.out.println("My name is "+name+".");
    }
    public void dance()
    {
        System.out.println("I can dance.");
    }
}
public class SimpleInheri
{
    public static void main(String[] args)
    {
        Peacock peacock=new Peacock();
        peacock.display();      // Specific to Dog
        peacock.eat();          // Inherited from Animal
        peacock.sleep();        // Inherited from Animal
        peacock.dance();         // Specific to Dog
    }
}
