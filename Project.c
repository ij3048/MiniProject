#include<stdio.h>
#ifndef MAX
#define MAX 10
#endif
struct student{
    char name[20];
    int age;
    int r_no;
};
int main(){
        int max;
        int i;
        printf("Enter number of student: ");
        scanf("%d",&max);
        struct student s[max];
        for(i=0;i<max;i++)
        {
                
                printf("Enter Name of Student: ");
                scanf("%s",s[i].name);
                printf("Enter Age of Student: ");
                scanf("%d",&s[i].age);
                printf("Enter Roll Number of Student: ");
                scanf("%d",&s[i].r_no);
                
        }
        char *row1[] = {"Name", "Age", "Roll Number"};
        printf("%-*s |%*s |%*s\n", -9, row1[0], -MAX, row1[1], MAX, row1[2]);
        for(i=0;i<max;i++)
        {
            printf("%-10s|%-11d|%-5d",s[i].name,s[i].age,s[i].r_no);
            printf("\n");
        }
        return 0;
}
    