import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    long num = scn.nextInt(); 
    long reversed = 0;

    for(;num != 0; num /= 10) {
      long digit = num % 10;
      reversed = reversed * 10 + digit;
    }
    
    long x = 0;
    while(reversed>0){
        x = reversed%10;
        reversed = reversed/10;
        System.out.println(x);
    }
     }
    }
