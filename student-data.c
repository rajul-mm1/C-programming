#include<stdio.h>
#include<string.h>

 struct student_data{
        char name[20];
        char username[20];
        int semester;
        int percentage_marks;
};

int main(){

    struct student_data s1,s2,s3;

    strcpy(s1.name, "Hershey");
    strcpy(s1.username, "hers456");
    s1.semester = 1;
    s1.percentage_marks = 90;

    printf("NAME - %s\n",s1.name); 
    printf("USERNAME - %s\n",s1.username); 
    printf("SEMESTER - %d\n",s1.semester); 
    printf("PERCENTAGE MARKS - %d\n\n\n",s1.percentage_marks); 

    strcpy(s2.name, "Priya");
    strcpy(s2.username, "priya123");
    s2.semester = 1;
    s2.percentage_marks = 80;

    printf("NAME - %s\n",s2.name); 
    printf("USERNAME - %s\n",s2.username); 
    printf("SEMESTER - %d\n",s2.semester); 
    printf("PERCENTAGE MARKS - %d\n\n\n",s2.percentage_marks); 

    strcpy(s3.name, "Rohit");
    strcpy(s3.username, "rohit_last");
    s3.semester = 1;
    s3.percentage_marks = 50;
    printf("NAME - %s\n",s3.name); 
    printf("USERNAME - %s\n",s3.username); 
    printf("SEMESTER - %d\n",s3.semester); 
    printf("PERCENTAGE MARKS - %d\n",s3.percentage_marks); 

    return 0;

}