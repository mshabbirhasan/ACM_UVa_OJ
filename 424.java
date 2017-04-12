import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        BigInteger a = new BigInteger("0");
        
        Scanner myScanner = new Scanner(System.in);
        
        while(true){
            String str = myScanner.nextLine();
            if(str.equals("0"))
                break;
            a = a.add(new BigInteger(str));
        }
        
        System.out.println(a);
    }
}
