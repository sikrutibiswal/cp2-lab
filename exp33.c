/*complex number*/
typedef struct com
{
	int r,i;
}complex;
main()
{
    complex c1,c2,c3,c4;
	printf("Enter a real number: ");
	scanf("%d %d",&c1.r,&c1.i);
	printf("Enter an imaginary number: ");
	scanf("%d %d",&c2.r,&c2.i);
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	c4.r=c1.r-c2.r;
	c4.i=c1.i-c2.i;
	printf("%d + %d i",c3.r,c3.i);
	printf("%d - %d i",c4.r,c4.i);
}

