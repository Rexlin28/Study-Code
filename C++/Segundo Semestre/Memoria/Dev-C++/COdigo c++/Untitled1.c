#include <string.h>
#include <stdio.h>

int main(){
	char str1,str2;
	printf("Complete la frase");
	while ((str1!="pera") || (str2!="manzana")){
		str2="Una de mis frutas favoritas es: "
		printf("%s",str2);
		scanf("%s",&str1);
		strlwr(str1);
		if (strl1=="pera" || strl1=="manzana"){
			strcat(str2,str1);
			printf("%s esta incorrecto",str2);
		}
		
	}
	printf("%s esta correcto", str2)
}
