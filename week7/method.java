public class method{

    public void value(int s){
        System.out.println("the int data type: "+s);
    }
    public void value(String s){
        System.out.println("the string data type: "+s);
    }
    public void value(double s){
        System.out.println("the double data type: "+s);
    }
    public static void main(String[] args) {
        method obj=new method();
        obj.value(12);
        obj.value("sravani");
        obj.value(444);
    }
}
