class Table{
	synchronized void printTable(int n) {
		for(int i = 1; i <= 12; i++)
			System.out.println(n + " * " + i + " = " + i*n);
	}
}

class Thread1 extends Thread{
	Table obj= new Table();
	int n;
	Thread1(Table table, int n){
		this.obj = table;
		this.n = n;
	}
	public void run() {
		obj.printTable(n);		
	}
}

class Thread2 extends Thread{

	Table obj1= new Table();
	int n;
	Thread2(Table table, int n){
		this.obj1 = table;
		this.n = n;
	}
	public void run() {
		obj1.printTable(n);			
	}
}
public class ThreadSync{

	public static void main(String[] args) {
		Table obj2 = new Table();
		Thread1  obj3= new Thread1(obj2, 5);
		Thread2 obj4 = new Thread2(obj2, 10);
		obj3.start();
		obj4.start();
	}
}
