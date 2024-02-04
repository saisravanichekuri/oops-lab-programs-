import java.util.Scanner;
public class Hellousername{
    public static void main(String[] args){
        String name;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter username: ");
        name = input.next();
        System.out.println("Hello "+name);
    }
}
