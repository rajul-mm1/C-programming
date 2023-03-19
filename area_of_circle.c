# include <stdio.h>

int main(){
float r ;               //r = radius
printf("enter the value of r: \n");
scanf("%f", &r);

float area = 3.14 * r * r;

printf("the area of circle is %f",area);
return 0;
}