#include <stdio.h>
 
int main(){
	int k,i,n,win;
	scanf("%d",&k);
	for (i=1;i<=k;i++){
		scanf("%d\n%d",&n,&win);	
		scanf("%*c%*[^\n]");
		if (win==0) printf("wind\n");
	 		else printf("lolanv\n");
	}
	//system("pause");
	return 0;			
}
