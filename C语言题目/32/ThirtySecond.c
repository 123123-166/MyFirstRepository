//模拟打印浮点数
#include<stdio.h>

void PrintReal(double N, int Decplaces);

int main(void)
{
	PrintReal(1.245, 20);

	return 0;
}

/* DecPlaces是保留的小数部分 */
double RoundUp(double N, int DecPlaces)
{
	int i;
	double AmountToAdd = 0.5;

	for (i = 0; i < DecPlaces; i++)
	{
		AmountToAdd /= 10;
	}
	return N + AmountToAdd;
}

//FractionPart是小数部分
void PrintFractionPart(double FractionPart, int DecPlaces)
{
	int i, Adigit;
	for (i = 0; i < DecPlaces; i++)
	{
		FractionPart *= 10;
		Adigit = (int)FractionPart;
		printf("%d", Adigit);
		FractionPart -= Adigit;
	}
	putchar('\n');
}

//模拟打印浮点数
void PrintReal(double N, int Decplaces)
{
	int IntegerPart;
	double FractionPart;

	if (N < 0)
	{
		putchar('-');
		N = -N;
	}
	N = RoundUp(N, Decplaces);
	IntegerPart = (int)N;
	FractionPart = N - IntegerPart;
	printf("%d", IntegerPart);
	if (Decplaces > 0)
		putchar('.');
	PrintFractionPart(FractionPart, Decplaces);
}