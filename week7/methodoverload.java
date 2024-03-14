class parent{
    public void add(int a,int b){
          System.out.println("i am the parent class");
          System.out.println(a+b);
    }
}
class child extends parent{
    public void add(double a,double b){
       System.out.println("i am a child class");
       System.out.println(a+b);  
    }
}
public class methodoverload{
     public static void main(String[] args) {
        child obj= new child();
        obj.add(2.2,5.5);
   }
}
