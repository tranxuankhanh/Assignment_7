#include <stdio.h>
#include <conio.h>

int main (void)
{
    float a,b;
    printf("nhap vao he so a : "); scanf("%f", &a);
    printf("nhap vao he so b : "); scanf("%f", &b);

    if(a == 0)
    {
        if(b == 0)
            printf("phuong trinh vo nghiem");
        else
            printf("phuong trinh vo so nghiemmmm");
    }
        else
            printf("phuong trinh co mot nghiem duy nhat x = %f", (float)(-b/2*a));
    return 0;
}
