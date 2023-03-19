#include<stdio.h>

int main(){
     float radius, volume, surface_area;

 printf("Enter the radius: \n");
  scanf("%f",&radius);

  volume = (4 / 3) * 3.14 * radius * radius * radius;

 printf("The volume of sphere is %f\n", volume);

 surface_area = 4 * 3.14 * radius * radius;

 printf("The surface area of a sphere is %f", surface_area);

 return 0;
}
