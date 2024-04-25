class runthread implements Runnable{
    public
    int a,b;
    void add(){
        System.out.println("the sum of two numbers a and b is: "+(a+b));
    }

    runthread(int a,int b){
        this.a=a;
        this.b=b;
    }
    public void run(){
        System.out.println("Thread has been created by using runnable interface");
        add();
    }
    public static void main(String[] args){
        runthread obj= new runthread(4,6);
        obj.run();
    }
}
