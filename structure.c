#include<stdio.h>
struct data{
    int id;
    float percentage;
    int marks;
};
int main(){
struct data student1, student2, student3;
student1.id=47;
student1.percentage=75.7;
printf("%d\n%f", student1.id,student1.percentage);
return 0;
}
