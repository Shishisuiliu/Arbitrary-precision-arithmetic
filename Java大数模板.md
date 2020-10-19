# Java 大数模板

    import java.util.*;
    import java.math.*;
    public class Main{
            public static void main(String args[]){
                    Scanner cin = new Scanner(System.in);
                    BigInteger a,b;
                    while (cin.hasNext()){
                            a = cin.nextBigInteger();
                            b = cin.nextBigInteger();
                            System.out.println(a.add(b));//加
                            System.out.println(a.subtract(b));//减
                            System.out.println(a.multiply(b));//乘
                            System.out.println(a.divide(b));//除
                            System.out.println(a.remainder(b));//取模
                            if( a.compareTo(b) == 0 ) System.out.println("a == b");//判断大小
                            else if( a.compareTo(b) > 0 ) System.out.println("a > b");
                            else if( a.compareTo(b) < 0 ) System.out.println("a < b");
                            System.out.println(a.abs());//绝对值
                    }
            }
    }
