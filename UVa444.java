
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Shabbir
 */
public class UVa444 {

    public static void main(String args[]) throws Exception {
        Scanner scanner = new Scanner(System.in);
        //Scanner scanner = new Scanner(new File("in.txt"));
        //FileWriter fw = new FileWriter("out.txt");

        while (scanner.hasNextLine()) {
            String str = scanner.nextLine();
            String strRev = str;
            String result = "";
            if (str.matches(".*\\d+.*")) {
                strRev = new StringBuilder(str).reverse().toString();

                for (int i = 0; i < strRev.length();) {
                    if (strRev.charAt(i) == '1') {
                        String s = Character.toString(strRev.charAt(i)) + Character.toString(strRev.charAt(i + 1)) + Character.toString(strRev.charAt(i + 2));
                        char c[] = Character.toChars(Integer.parseInt(s));
                        result += String.valueOf(c);
                        i += 3;
                    } else {
                        String s = Character.toString(strRev.charAt(i)) + Character.toString(strRev.charAt(i + 1));
                        char c[] = Character.toChars(Integer.parseInt(s));
                        result += String.valueOf(c);
                        i += 2;
                    }
                }

            } else {
                String s = "";
                for (int i = 0; i < str.length(); i++) {
                    int val = (int) str.charAt(i);
                    s += new Integer(val).toString();
                }

                result = new StringBuilder(s).reverse().toString();
            }

            System.out.print(result+"\n");
            //fw.write(result + "\n");
        }
        scanner.close();
        //fw.close();
    }
}
