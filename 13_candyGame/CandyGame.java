import java.util.Scanner;
 
public class CandyGame{
	public static void main(String[] args){
		
		Scanner scanner=new Scanner(System.in);
		while(scanner.hasNext()){
			int a=scanner.nextInt();
			int b=scanner.nextInt();
			new CandyGame().solve(a, b);
			
		}
	}
	//方法一
	public void solve(int a,int b){
		int[] as=new int[]{2,3,7,8};
		int[] bs=new int[]{1,4,5,6,9,10};
		int modA=a%10;
		int modB=b%10;
		int i=0;
		for(i=0;i<bs.length;i++){
			if(bs[i]==modA||bs[i]==modB){
				System.out.println("Matrix67");
				break;
			}
		}
		if(i==bs.length)
			System.out.println("Shadow");
	}
	//方法二：会发现a/b处于5的时候，余数为2/3的时候，shadow赢
	public void solve2(int a,int b){
		
		if(a%5==2||a%5==3||b%5==2||b%5==3)
			System.out.println("Shadow");
		else
			System.out.println("Matrix67");
	}
}

