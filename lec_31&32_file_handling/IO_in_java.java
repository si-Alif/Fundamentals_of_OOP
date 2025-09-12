import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class IO_in_java{
  public static void main(String args[]){
    try{
      FileWriter fw = new FileWriter("example.txt");
      fw.write("This is a line from java.\nThis is another line from java.\n");
      fw.close();
    }
    catch(IOException err) {
      err.printStackTrace();
    }

    try{
      // If you use FileReader , you would read character by character . If you use BufferedReader , you would read line by line . It's a tradeoff between speed and ease of use
      BufferedReader fr = new BufferedReader(new FileReader("example.txt"));
      String line ;
      // read buffered line from the file using the readLine() method , assign it to the line variable and print it
      while((line = fr.readLine()) != null){
        System.out.println(line);
      }
      fr.close();
    }
    catch(FileNotFoundException err) {
      System.out.println("File not found");
      err.printStackTrace();
    }
    catch(IOException err) {
      err.printStackTrace();
    }
  }
}