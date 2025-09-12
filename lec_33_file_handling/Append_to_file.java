import java.io.FileWriter;
import java.io.IOException;

public class Append_to_file {
  public static void main(String[] args) {
    try{
      FileWriter fw = new FileWriter("example.txt" , true); // true means append mode
      fw.write("This is a line from java.\nThis is another line from java.\n");
      fw.close();
    }
    catch(IOException err){
      err.printStackTrace();
    }
  }
}