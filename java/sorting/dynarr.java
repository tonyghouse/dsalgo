public class A{
    private static Box boxes[]=new Box[5]; 
    public static void main(String[] args){
      System.out.println("main method");
      boxes=expand(boxes);
      boxes=test2(boxes);
      System.out.print(boxes.length);
    }
    public static Box[] expand(Box[] boxes){
     Box[] temp=new Box[boxes.length+1];
     boxes=temp;
     boxes[0]=new Box(786,2);
     boxes[1]=new Box(12,22);
     System.out.println(temp.length);
     System.out.println(boxes.length);
     return boxes;
    }
    public static Box[] test2(Box[] boxes){
       System.out.println(boxes[0].j);
       Box[] temp=new Box[boxes.length+1];
       for(int i=0;i<boxes.length;i++)
       {
         temp[i]=boxes[i];
       }
       boxes=temp;
       boxes[2]=new Box(13,23);
     boxes[3]=new Box(14,24);
       System.out.println(temp.length);
       System.out.println(boxes.length);
       return boxes;
    }
      public static void test3(){
       System.out.println("test3 boxes"+boxes.length);
       
    }
      
  }
  
  class Box{
    int j;
    int k;
    
    Box(int j,int k){
      this.j=j;
      this.k=k;
    }
  }