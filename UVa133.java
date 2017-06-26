
import java.io.File;
import java.io.FileNotFoundException;
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
public class UVa133 {

    private static boolean shouldContinue(boolean[] arr){
        boolean flag = true;
        for(int i = 0; i<arr.length; i++){
            flag = flag && arr[i];
        }
        
        return flag;
    }
    public static void main(String args[]) throws FileNotFoundException {
        //int caseNumber = 0;
        Scanner scanner = new Scanner(new File("in.txt"));
        //Scanner scanner = new Scanner(System.in);
        
        //while (scanner.hasNext()) {            
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            int m = scanner.nextInt();
            
            n = 10; k = 4; m = 3;
            
            /*if(n == 0 && k ==0 && m == 0)
                break;*/
            
            int doleArray[] = new int[n];
            boolean doleArrayFlag[] = new boolean[n];
            
            for(int i = 0; i<doleArray.length; i++){
                doleArray[i] = i;
                doleArrayFlag[i] = false;
            }
            boolean flag = shouldContinue(doleArrayFlag);
            int antiClockWiseTrack = 0;
            int clockWiseTrack = n - 1;
            
            int firstRemovedDole = 0;
            int secondRemovedDole = 0;
            
            while(!flag){
                System.out.println(antiClockWiseTrack + " " + clockWiseTrack);
                for(int i = 1; i<=k;){
                    if(!doleArrayFlag[antiClockWiseTrack]){
                        i++;
                        antiClockWiseTrack++;
                    }
                    antiClockWiseTrack--;
                    
                    /*if(antiClockWiseTrack == n - 1){
                        antiClockWiseTrack = 0;
                    }*/
                    
                }
                firstRemovedDole = doleArray[antiClockWiseTrack];
                
                for(int j = 1; j<=m;){
                    if(!doleArrayFlag[clockWiseTrack]){
                        j++;
                        clockWiseTrack--;
                    }
                    /*if(clockWiseTrack == 0){
                        clockWiseTrack = n - 1;
                    }*/
                }
                clockWiseTrack++;
                secondRemovedDole = doleArray[clockWiseTrack+1];
                
                //System.out.println(firstRemovedDole + " " + secondRemovedDole);
                
                doleArrayFlag[antiClockWiseTrack] = true;
                doleArrayFlag[clockWiseTrack] = true;
                
                flag = shouldContinue(doleArrayFlag);     
            }
            
        //}
        
        scanner.close();
    }
}
