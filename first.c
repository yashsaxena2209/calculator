#include <stdio.h>

int main()
{
    int l, b, h;
    printf("Enter the length, breadth, height:");
    scanf("%d %d %d", &l, &b, &h);
    
    int surfaceArea = 2 * (l*b + b*h + h*l);
    
    printf("The Surface Area is : %d\n", surfaceArea);
    
    int volume = l * b * h;
    printf("The Volume of the cuboid is: %d\n", volume);
    getch();
    return 0;
}
---------------------------------------

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter values for x and y:");
    scanf("%d %d", &x, &y);
    
    int intel = 2 * (y + 0.5 * x);
    
    printf("The Intelligence : %d\n", intel);
    
    return 0;
}

---------------------------------------

#include <stdio.h>

int main()
{
    float r, dia, cir, SA, vol;
    float PI = 3.1416;
    
    printf("Enter the value of radius : ");
    scanf("%f", &r);
    
    dia = 2 * r;
    printf("Diameter is : %f\n", dia);
    
    cir = 2 * PI * r;
    printf("Circumference is : %f\n", cir);
    
    SA = 4 * PI * r * r;
    printf("Surface Area is : %f\n", SA);
    
    vol = 4/3 * PI * r * r * r;
    printf("The Volume is: %f\n", vol);
    getch();
    return 0;
}

---------------------------------------

