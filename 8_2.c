/*Define a structure Distance to store distance in kilometer, meter & centimeter. Create an array of Distance type to store 5 Distance variables. 
Find the longest distance using pointers. */
#include <stdio.h>
struct distance {
	int km;
	int m;
	int cm;
};
int main(){
	struct distance d[5];
	struct distance *p;
	int i,index=0;
	long total[5];
	for(i=0;i<5;i++){
		printf("Enter km,m,cm: ");
		scanf("%d %d %d",&d[i].km,&d[i].m,&d[i].cm);
	}	
	p=d;
	for(i=0;i<5;i++){
		total[i]=(p+i)->km*100000+(p+i)->m*100+(p+i)->cm;
	}
	for(i=1;i<5;i++){
		if(total[i]>total[index]){
			index=i;
		}
	}
	printf("Longest Distance is:%d km %d m %d cm",d[index].km , d[index].m , d[index].cm);
	return 0;
}
