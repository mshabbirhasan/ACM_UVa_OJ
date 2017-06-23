
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
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
public class Main {

    public static void main(String args[]) throws FileNotFoundException {
        int caseNumber = 0;
        //Scanner scanner = new Scanner(new File("in.txt"));
        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNext()) {
            int numberOfMembes = scanner.nextInt();
            List<String> members = new ArrayList<String>();

            for (int i = 0; i < numberOfMembes; i++) {
                String member = scanner.next();
                members.add(member);
            }

            Map<String, Integer> personToAmountMap = new HashMap<String, Integer>();

            for (int i = 0; i < numberOfMembes; i++) {
                personToAmountMap.put(members.get(i), 0);
            }

            for (int i = 0; i < numberOfMembes; i++) {
                String giver = scanner.next();
                int giftAmount = scanner.nextInt();
                int numberOfTakers = scanner.nextInt();

                if (numberOfTakers > 0) {
                    personToAmountMap.put(giver, personToAmountMap.get(giver) - giftAmount + (giftAmount % numberOfTakers));
                }

                for (int j = 0; j < numberOfTakers; j++) {
                    String taker = scanner.next();
                    personToAmountMap.put(taker, personToAmountMap.get(taker) + (giftAmount / numberOfTakers));
                }
            }

            if(caseNumber > 0){
                System.out.println();
            }
            caseNumber++;

            for (int i = 0; i < numberOfMembes; i++) {
                String name = members.get(i);
                int grossAmount = personToAmountMap.get(name);
                System.out.println(name + " " + grossAmount);
            }
        }
        
        scanner.close();
    }
}
