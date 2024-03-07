public class AccessSpecifierDemo{
    
    private int priVar;
    protected int proVar;
    public int pubVar;
    
    public void setVar(int priValue, int proValue, int pubValue) {
        this.priVar = priValue;
        this.proVar = proValue;
        this.pubVar = pubValue;
    }

    public void getVar() {
        System.out.println("Private Variable: " + priVar);
        System.out.println("Protected Variable: " + proVar);
        System.out.println("Public Variable: " + pubVar);
    }

 
    public static void main(String[] args) {
        AccessSpecifierDemo obj = new AccessSpecifierDemo();
        obj.setVar(11, 21, 31);
        obj.getVar();
    }
}
