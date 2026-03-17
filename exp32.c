/*store date in DD/MM/YYYY format*/
#include<stdio.h>
typedef struct day
{
	int dd,mm,yy;
}date;
main()
{
	date d2={05,12,2005};
	date d1;
	printf("Enter the date: ");
	scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yy);
	printf("%d/%d/%d",d2.dd,d2.mm,d2.yy);
	printf("\n%d/%d/%d",d1.dd,d1.mm,d1.yy);
}
