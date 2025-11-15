#include <stdio.h> 
#define pi 3.14
int main(void){
    float radius , surface_area;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    surface_area = 4 * pi * radius * radius;
    printf("The surface area of the sphere is: %.2f\n", surface_area);
    return 0;
}

