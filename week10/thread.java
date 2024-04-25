class createthread extends Thread{
    int a,b;
    createthread(int a,int b){
        this.a=a;
        this.b=b;
    }
    void add(){
        System.out.println("the sum of the two numbers is: "+(a+b));
    }
    public void run(){
        System.out.println("Thread has been created");
        add();
    }
    public static void main(String[] args){
        createthread obj= new createthread(4,6);
        obj.start();
    }
}
