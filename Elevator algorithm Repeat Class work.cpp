#include <stdio.h>
#include <conio.h>
#include <math.h>
#define n 8
main(){
	int head=19,sum,loc,temp,dizi[n] = {3,35,12,31,8,10,44,93};
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(dizi[i]>dizi[j])
			{
				temp= dizi[i];
				dizi[i] = dizi[j];
				dizi[j]=temp;
			}
		}
	}
	for(int j=0; j<n; j++){
		printf("%d ",dizi[j]);
			
		}
		
	printf("\n yon saga");	
	sum=0;
	int i;
	for( i=0; i<n; i++){
		if(dizi[i] > head){
		loc =i;	
		break;
		}
		
	}
	sum += dizi[loc] - head;
	printf("\n--%d---",sum);
	for( i=loc; i<n-1; i++)
	{
		sum += dizi[i+1]-dizi[i];
		printf("\n--%d---",sum);
	}
	 
	sum += dizi[n-1] - dizi[loc];
	printf("\n--%d---",sum);

	/
	
	for( i=loc; i>0; i--){
		sum += dizi[i] - dizi[i-1];
	}
	printf("\n%d ",sum);

	printf("\n yon sola %d",loc);
	sum = 0;
	sum += dizi[loc] - head;

	for( i=loc; i>0; i--)
	{
		sum += dizi[i-1] - dizi[i];
			printf("\n--%d---",sum);
	}
	sum +=dizi[0]-dizi[loc];
		printf("\n--%d---",sum);
	for( i=loc; i<n-1; i++) //
	{
		sum = sum  + (dizi[i]-dizi[i+1]);
			printf("\n%d--->",sum);
				
	}		 
	
	printf("\n--%d---",sum);
	
}
