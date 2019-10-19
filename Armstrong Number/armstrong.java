import java.util.Scanner;
import java.util.Random;
class armstrong{
    public static void main(String a[]){
            Scanner sc=new Scanner(System.in);
            Random random=new Random();
            int n=random.nextInt() & Integer.MAX_VALUE;
            System.out.println("Random number is "+n);
            double sum=0;
            for(int i=0;n>0;i++){
                int k=n%10;
                sum=sum+Math.pow(k,3);
                n=n/10;
            }
            System.out.println("sum is "+sum);
    }
}
