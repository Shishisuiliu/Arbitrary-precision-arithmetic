 # 大数乘法

        import java.util.Scanner;
        import java.math.BigInteger;

        public class Main {
            public static void main(String args[]){
                Scanner cin=new Scanner(System.in);
                while(cin.hasNext()) {
                    BigInteger a=cin.nextBigInteger();
                    BigInteger b=cin.nextBigInteger();
                    BigInteger c=new BigInteger("0");
                    c=a.multiply(b);
                    System.out.println(c);
                }
            }
        }
        
        
  # 大数加法
    
        import java.util.Scanner;
        import java.math.*;

        public class Main
        {
            public static void main(String[] args)
            {
                Scanner cin = new Scanner(System.in);
                int n;
                n=cin.nextInt();
                while(n!=0)
                {
                    BigInteger num1,num2;
                    num1=cin.nextBigInteger();
                    num2=cin.nextBigInteger();
                    System.out.println(num1.add(num2));
                    n--;
                }
            }
        }
        
   # 四则运算
          public class Main{
          public static void main(String []args)
          {
          Scanner cin = new Scanner(new BufferedInputStream(System.in));
          while(cin.hasNext())
          {
          BigInteger a=cin.nextBigInteger();
          BigInteger b=cin.nextBigInteger();
          BigInteger c1=a.add(b);   //大数加法
          System.out.println("加的结果为 "+c1);
          BigInteger c2=a.subtract(b); //大数减法
          System.out.println("减的结果为 "+c2);
          BigInteger c3=a.multiply(b); //大数乘法
          System.out.println("乘的结果为 "+c3);
          BigInteger c4=a.divide(b); //大数除法
          System.out.println("除的结果为 "+c4);
          //BigInteger c5=a.mod(b); //大数模
          BigInteger c5=a.remainder(b);
          System.out.println("模的结果为 "+c5);
          BigInteger c6=a.max(b);//取最大
          System.out.println("最大为 "+c6);
          BigInteger c7=a.min(b); //取最小
          System.out.println("最小为 "+c7);
          if(a.equals(b)) //判断是否相等
          System.out.println("相等");
          else System.out.println("不相等");
          BigInteger c8=a.gcd(b); //求最大公约数
          System.out.println("最大公约数为 "+c8);
          }
           }
        }
