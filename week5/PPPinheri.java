class Public
{
    public int a=10;
    protected int b=20;
    private int c=30;
    public int getc()
    {
        return c;
    }
}

public class PPPInheri
{
    public static void main(String[] args)
    {
        Public obj=new Public();
        System.out.println("Public Variable is : "+obj.a);
        System.out.println("Protected Variable is : "+obj.b);
        
        System.out.println("Private Variable is : "+obj.getc());
    }
}
