#include <stdio.h>
#include <conio.h>
void main()
{
	int hm=0, hi, ch;
	printf("Hora actual:");
	scanf("%i", &hi);
	printf("cantidad de horas:");
	scanf("%i", &ch);

	hm=hi+ch;
	while(hm>=24)
	hm=hm-24*(hm/24);

	printf("En %d horas el reloj marcara las %d", ch, hm);
	getch();
}
