import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Formatter;


public class Formatted_output{
  public static void main(String[] args) {
    try(BufferedWriter fw = new BufferedWriter(new FileWriter("output.txt"))){
        Formatter formatter = new Formatter(fw);
        formatter.format("%-20s %10s%n", "Name" , "Score");
        formatter.format("%-20s %10d%n", "Hero Alom" , 101);
        formatter.format("%-20s %10d%n", "Messi" , 99);
        formatter.format("%-20s %10d%n", "Ronaldo" , 98);
        formatter.close(); // close formatter and fw at the same time
    }catch(IOException err){
      err.printStackTrace();
    }
  }
}