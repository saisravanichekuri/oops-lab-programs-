class BubbleSort<T extends Comparable <T>>{
    void bubbleSort(T[] data){
        for(int i=0;i<data.length;i++){
            for(int j=1;j<data.length;j++){
                if(data[j-1].compareTo(data[j])<0){
                    T temp=data[j-1];
                    data[j-1]=data[j];
                    data[j]=temp;
                }
            }


        }
        for(int i=0;i<data.length;i++){
            System.out.println(data[i]);
        }


    }
    public static void main(String[] args){
        BubbleSort<Integer> obj=new BubbleSort<>();
       Integer arr[]={3,5,9,8,2};
        obj.bubbleSort(arr);
        BubbleSort<String> obj1=new BubbleSort<>();
         String arr1[]={"chekuri","sravani"};
        obj1.bubbleSort(arr1);
 BubbleSort<Double> obj2=new BubbleSort<>();
       Double arr2[]={2.39,1.65,8.63};
        obj2.bubbleSort(arr2);




    }
}
