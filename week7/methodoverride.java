class Animal{
    public void eat(){
          System.out.println("i am the parent class");
          System.out.println("i eat to live");
    }
}
class dog extends Animal{
    public void eat(){
       System.out.println("i am a child class");
       System.out.println("i like to eat chicken");  
    }
}
public class methodoverride{
     public static void main(String[] args) {
        dog obj= new dog();
        obj.eat();
    }
}
