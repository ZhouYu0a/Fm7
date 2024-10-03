#include <stdio.h>
int main() {
	int num1, num2, num3,a,b;
	printf("Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2)
	{
		a = num1;
		if (a< num3)
			a = num3;
	}

	else if (num3 > num2)
		a = num3;
	else
		a = num2;
	if (num1 < num2)
	{
		b = num1;
		if (b > num3)
			b = num3;	
	}
	else if (num3 < num2)
		b = num3;
	else
		b = num2;
	printf("largest  integers: %d\n",a);
	printf("smallest integers: %d",b);
	return 0;
}