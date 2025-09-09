import java.io.IOException;

public class TestThrows{

  void m() throws IOException{
    throw new IOException("device error"); // throw keyword is used to throw an error fr
  }

  // throws is used in the function signature to declare the exceptions that can be thrown by the function . This gives certainty of errors that might be raised from a functionality while execution
  void n() throws IOException , ArithmeticException , ArrayIndexOutOfBoundsException{
    m();
    //⭐ Code won't go beyond this line . Casue m() throws IOException , which was caught by the nearest catch block available in the stack and code flow was terminated . Hence this line won't be executed
    throw new ArrayIndexOutOfBoundsException("index error from n()");
  }

  // used n() here and based on the exception might be raised by n() based on it's signature , catch blocks were written
  void p(){
    try{
      n();
    }
    catch(ArithmeticException e){
      System.out.println("Arithmetic Exception handled in p()");
    }
    catch(IOException e){
      System.out.println("IOException handled in p()");
    }
    catch(ArrayIndexOutOfBoundsException e){
      System.out.println("ArrayIndexOutOfBoundsException handled in p()");
    }
  }

  public static void main(String[] args){
    TestThrows obj = new TestThrows();
    obj.p();
  }
}