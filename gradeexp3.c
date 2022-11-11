#include<stdio.h>
#include<conio.h>
int main()
{
    float s=0,m1,m2,m3,m4,m5,T,Avg;
    printf("Enter the marks of the students :\n");
    scanf("%f\n%f\n%f\n%f\n%f",&m1,&m2,&m3,&m4,&m5);
    T=m1+m2+m3+m4+m5;

    Avg= T/5;

    printf("Total marks is %f\n Average marks is %f\n",T,Avg);
    if (Avg>=90 && Avg<=100)
    {
        printf(" Grade S");
    }
     if (Avg>=80 && Avg<=90)
    {
        printf(" Grade A+");
    }
     if (Avg>=70 && Avg<=80)
    {
        printf(" Grade A");
    }
     if (Avg>=60 && Avg<=70)
    {
        printf(" Grade B");
    }
     if (Avg>=50 && Avg<=60)
    {
        printf(" Grade C");
    }
     if (Avg>=40 && Avg<=50)
    {
        printf(" Grade D");
    }
     if (Avg<40)
    {
        printf(" Grade F ");
    }
    return 0;
}