import java.math.BigInteger;

public class Tea{
    public static void main(String[] args) {
        BigInteger base,p,ya,y,result,init,step;
        init = new BigInteger("0");
        step = new BigInteger("1");
        base =new BigInteger("2");
        p = new BigInteger("11706593258111142827");
        ya = new BigInteger("3415549615389079368");
        y = ya;
        result = new BigInteger("0");
        long n= 10000000000L;
        for(long i=0L;i<n;i++){
            result = base.modPow(y, p);
            
            if(result.compareTo(ya)==0){
                System.out.println(y);
                break;
            }
            y=result;
        }
        System.out.println(y);
    }
}