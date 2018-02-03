import java.util.*;
import java.math.*;

class f {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        while(in.hasNextBigInteger()) {
            BigInteger A = new BigInteger(in.next());
            if(A.equals(new BigInteger("1")))
            {

            }
            else
            A = (A.multiply(new BigInteger("2"))).subtract(new BigInteger("2"));

            System.out.println(A.toString());
        }
    }
}

