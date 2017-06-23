
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Shabbir
 */
public class UVa409 {

    public static void main(String args[]) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        //FileReader fr = new FileReader("in.txt");
        //BufferedReader in = new BufferedReader(fr);

        String line;
        int caseNumber = 1;
        
        while ((line = in.readLine()) != null) {
            List<String> keywords = new ArrayList<String>();
            List<String> excuses = new ArrayList<String>();
            Map<String, Integer> excusesToCountMap = new HashMap<String, Integer>();

            String lineArray[] = line.split(" ");
            int numberOfKeywords = Integer.parseInt(lineArray[0]);
            int numberOfExcuses = Integer.parseInt(lineArray[1]);

            for (int i = 0; i < numberOfKeywords; i++) {
                keywords.add(in.readLine());
            }

            for (int i = 0; i < numberOfExcuses; i++) {
                String str = in.readLine();
                excuses.add(str);
                excusesToCountMap.put(str, 0);
            }
            
            for (String excuse : excusesToCountMap.keySet()) {
                int count = 0;
                String str = excuse.replaceAll("[^a-zA-Z]", " ");
                String arr[] = str.split(" ");
                for (int i = 0; i < arr.length; i++) {
                    if (keywords.contains(arr[i].toLowerCase())) {
                        count++;
                    }
                }
                excusesToCountMap.put(excuse, count);
            }
            
            System.out.println("Excuse Set #" + caseNumber);
            
            int max = 0;
            for (String excuse : excusesToCountMap.keySet()) {
                int count = excusesToCountMap.get(excuse);
                if (count > max){
                    max = count;
                }
            }
            
            for(int i = 0; i<excuses.size(); i++){
                String excuse = excuses.get(i);
                int count = excusesToCountMap.get(excuse);
                if(count == max){
                    System.out.println(excuse);
                }
            }
            caseNumber++;
            
            System.out.println();
        }

        in.close();

    }
}
