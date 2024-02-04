import java.util.Scanner;
public class OddorEven{
    static void find(int a)
    {
        if(a%2 == 0)
        {
            System.out.println("The value "+ a +" is a even number.");
        }
        else
        {
            System.out.println("The number "+ a +" is a odd number.");
        }
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a;
        System.out.print("Enter the value of a : ");
        a = input.nextInt();
        find(a);
    }
}
