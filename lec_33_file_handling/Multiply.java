import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Multiply{
  public static void main(String[] args){
    try{
      BufferedReader fr = new BufferedReader(new FileReader("input.txt"));
      String line = fr.readLine();
      int a = Integer.parseInt(line);
      line = fr.readLine();
      int b = Integer.parseInt(line);
      fr.close();

      try {
        FileWriter fw = new FileWriter("output.txt" , true);
        fw.write("The product of " + a + " and " + b + " is " + a * b + " - written from the Java program");
        fw.close();
      }
      catch(FileNotFoundException err){
        err.printStackTrace();
      }

    }
    catch(IOException err){
      err.printStackTrace();
    }
  }
}