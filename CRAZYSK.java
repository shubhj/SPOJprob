import java.util.*;
import java.math.BigInteger;
import java.io.IOException;
public class Main
{
         public static void main(String args[]){

                 BigInteger y=new BigInteger("0");
                 BigInteger t;
                 int r=0;
                 BigInteger k=new BigInteger("1");
                 BigInteger count=new BigInteger("0");
                 BigInteger p=new BigInteger("0");
                 BigInteger l=new BigInteger("0");
                 Scanner sc=new Scanner(System.in);
                 t=sc.nextBigInteger();
                while(t.compareTo(y)==1){
                 BigInteger x=sc.nextBigInteger();
                 BigInteger n=sc.nextBigInteger();
                        p=x;
                        count=x;
                        r=p.compareTo(n);
                        while(r==0|| r==1){
                                BigInteger bi[] = p.divideAndRemainder(n);
                                count=count.add(bi[0]);

                                p=bi[0].add(bi[1]);
                                r=p.compareTo(n);
                        }
                        System.out.println(count);

                           t=t.subtract(k);
                }
        }
}




