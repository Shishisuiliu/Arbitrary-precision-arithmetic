传统递归方法  

	int factorial(int n) 
	{ 
	if(n <= 0) return(-1); 
	if(n == 1) return 1; 
	else return n*factorial(n - 1); 
	}

# Version1   
	_________________________________________________
	int a[40000],n,w=1;     //用数组储存阶乘后的数 
	void factorial(int k){
		int x=0,i;                    //起初进位x设置为0 
		for(int i=1;i<=w;i++){
			a[i]=a[i]*k+x;
			x=a[i]/10;          //计算进位 
			a[i]%=10;              //除去进位部分 
		} 
		while(x>0){
			w++;
			a[w]=x%10;
			x/=10;
		}
	}
	int main(){
		int n;
	while(~scanf(“%d”,&n){
	memset(a,0,sizeof(a));
	a[1]=1;            //1的阶乘 
	for(int i=1;i<=n;i++)
	factorial(i);
	for(int j=w;j>=1;j--)
	printf("%d",a[j]);
	printf(“\n”)
	}
	    return 0；
	}
	_____________________________________________________
  
# version2   
	_____________________________________________________
	#define U 10000
	int num[U+10];
	void factorial(int n)
	{
	    int w = 1,x,i,j;
	    num[0] = 1;
	    for (i = 2; i <= n; i++)
	    {
		x=0;   
		for (j = 0; j < w; j++)
		{
		    num[j] = num[j] * i + x;
		    x = num[j] / 10000;
		    num[j] %= 10000;
		}
		if (x > 0) 
		    num[w++] = x;
	    }
	    printf("%d", num[w-1]);
	    for (i = w- 2; i >= 0; i--)
		printf("%04d",num[i]);
	    printf("\n");
	}
	int main()
	{
	    int n;
	    while (scanf("%d",&n)!=EOF)
		factorial(n);
	    return 0;
	}
	____________________________________________________
	
# Java版

	import java.math.BigInteger;
	import java.util.Scanner;
        public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sca=new Scanner(System.in);
		BigInteger res[]=new BigInteger[10000+10];
		res[0]=BigInteger.ONE;
		for(int i=1;i<10000+1;i++){
			res[i]=res[i-1].multiply(BigInteger.valueOf(i));
		}
		while(sca.hasNext()){
			int x=sca.nextInt();
			System.out.println(res[x]);
		}
	}
    }

