#include <stdio.h>
#include <conio.h>
int main(void)
{
    float a,b,c;
    printf("nhap vao he so a : "); scanf("%f", &a);
    printf("nhap vao he so b : "); scanf("%f", &b);
    printf("nhap vao he so c : "); scanf("%f", &c);

    if(a != 0)
    {
        float deta = b*b - 4*a*c;

        if(deta > 0)
        {
            float x1 = (-b + sqrt(deta)) / 2*a;
            float x2 = (-b - sqrt(deta)) / 2*a;

            printf("vay phuong trinh co 2 nghiem phan biet la \n");
            printf("x1 = %f \n", &x1);
            printf("x2 = %f", & x2);
        }
        else if(deta == 0)
            printf("phuong trinh vo nghiem");
        else
            printf("phuong trinh co nghiem kep x = %f", -b/2*a);
    }
    return 0;
}
