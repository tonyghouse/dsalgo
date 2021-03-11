public class bubblesortobj2{
    public static void main(String[] args){
        ObjectMaker objects[]=new ObjectMaker[4];
        //test code
        objects[0]=new ObjectMaker("ghouse");
        objects[1]=new ObjectMaker("amar");
        objects[2]=new ObjectMaker("prabhu");
        objects[3]=new ObjectMaker("king");
        ObjectMaker sortedobjects[]=bubbleSort(objects);
        for(int i=0;i<sortedobjects.length;i++){
            System.out.print(sortedobjects[i].getPropertyName());
        }
    }

    public static ObjectMaker[] bubbleSort(ObjectMaker[] objects) {
        for (int a = 1; a < objects.length; a++) {
            for (int b = 0; b < objects.length - a; b++) {
                if (((objects[b].getPropertyName())
                        .compareTo((objects[b + 1].getPropertyName()))) > 0) {
                    // swap objects[b] with objects[b+1]
                    ObjectMaker temp = objects[b];
                    objects[b] = objects[b + 1];
                    objects[b + 1] = temp;
                }
            }
        }
        return objects;
    }
}

class ObjectMaker{
    String propertyname;
    ObjectMaker(String name){
        super();
        this.propertyname = name;
    }

    public void setPropertyName(String propertyname){
        this.propertyname=propertyname;
    }
   
    public String getPropertyName(){
        return propertyname;
    }
}