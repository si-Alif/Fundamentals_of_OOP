public class MultipleCatchBlock{
  public static void main(String[] args){
    try{

      int arr[] = new int[5];
      arr[5] = 30/0;
    }
    // only one catch block can be executed , think of it like cricket match where only one batsman can bat at a time and only one fielder will catch the ball at a time
    catch(ArithmeticException e){
      System.out.println("task1");
    }
    catch(ArrayIndexOutOfBoundsException e){
      System.out.println("task2");
    }
    catch (Exception e){
      System.out.println("common task");
    }

    System.out.println(
      "Rest of the code ..."
    );
  }
}