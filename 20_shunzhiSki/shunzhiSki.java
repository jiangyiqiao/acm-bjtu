import java.util.Scanner;
 
 
public class shunzhiSki{
	static int d[][];
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int m=scanner.nextInt();
		int n=scanner.nextInt();
		int result=0;
		int[][] c=new int[m+2][n+2]; //防止递归数组越界
		d=new int[m+2][n+2]; //存放每次计算结果
		for(int i=0;i<m+2;i++)
			for(int j=0;j<n+2;j++)
				c[i][j]=65535;  //初始化
		int max=1;
		for(int i=1;i<m+1;i++)
			for(int j=1;j<n+1;j++)
			   c[i][j]=scanner.nextInt();
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				int temp=fun(c,i,j,m,n)+1;  //之前的边界没有加上，在结果中加上
				if(temp>result)
					result=temp;
			}
		}
		System.out.println(result);
	}
	
	public static int fun(int[][] c,int x,int y,int m,int n){
		 int max=0;
		 int temp=0;
	     if(x<=0||y<=0||x>m||y>n)
	    	 return 0;
	     if(d[x][y]!=0){
	    	 return d[x][y];  //如果之前已计算过，则直接返回数据
	     }
	     if(c[x][y]>c[x-1][y]){  //上方
	    	     temp=1+fun(c,x-1,y,m,n);
	    	 if(temp>max)
	    		 max=temp;
	     }
	     if(c[x][y]>c[x+1][y]){  //下方
	    	 temp=1+fun(c,x+1,y,m,n);
	    	 if(temp>max)
	    		 max=temp;
	     }
	     if(c[x][y]>c[x][y-1]){  //左方
	    	     temp=1+fun(c,x,y-1,m,n);
	    	 if(temp>max)
	    		 max=temp;
	     }
	     if(c[x][y]>c[x][y+1]){ //右方
	    	     temp=1+fun(c,x,y+1,m,n);
	    	 if(temp>max)
	    		 max=temp;
	     }
	     d[x][y]=max;  //将得到的结果记录下来
	     return max;
	}
}

