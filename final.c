#include "grds.h"
#include <stdio.h>
struct student {
    char *name;
    int rollno;
    int marks1[6];
    int marks2[6];
    int marks3[6];
};

void student(struct student s) {
int total1=0;
int total2=0;
int total3=0;
       printf("Marks:\n");
char ar[][20] = { "Physics", "Chemi", "EVS","Mech","CS","Math" };
    printf("Subject\t\tISA1\tISA2\tESA\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", ar[i], s.marks1[i], s.marks2[i], s.marks3[i]);
        total1 += s.marks1[i];
        total2 += s.marks2[i];
        total3 += s.marks3[i];
    }
printf("Total\t\t%d\t%d\t%d\n",total1,total2,total3);
float CGPA = ((total1+total2/3 )+ (total3/2)) /60;
    printf("CGPA: %.2f\n", CGPA);

}


    struct student students[] = {
        {"Abhi", 1, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {90, 98, 96, 94, 95, 94}},
        {"Anu", 2, {35, 27, 26, 28, 39, 26}, {34, 22, 28, 20, 39, 25}, {89, 98, 80, 86, 79, 87}},
        {"Amith", 3, {39, 38, 37, 36, 35, 34}, {39, 35, 38, 34, 40, 37}, {90, 98, 96, 94, 95, 94}},
        {"Arya", 4, {35, 35, 24, 29, 38, 29}, {20, 29, 28, 20, 27, 29}, {90, 98, 96, 94, 95, 94}},
        {"Krithi", 5, {28, 27, 26, 20, 28, 29}, {34, 39, 27, 37, 39, 20}, {90, 98, 96, 94, 95, 94}},
        {"Ritu", 6, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {89, 88, 83, 90, 96, 99}},
        {"Raha", 7, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {90, 98, 96, 94, 95, 94}},
        {"Roy", 8, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {90, 98, 96, 94, 95, 94}},
        {"Riya", 9, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {89, 95, 89, 79, 86, 80}},
        {"Smrithi", 10, {35, 35, 24, 29, 38, 29}, {34, 39, 27, 37, 39, 20}, {28, 38, 49, 27, 28, 69}}


    };
int main() {
     int rollno;
     int choice;
     printf("the students of Section B are:\n1.Abhi\n2.Anu\n3.Amith\n4.Arya\n5.Krithi\n6.Ritu\n7.Raha\n8.Roy\n9.Riya\n10.Smrithi\n");
    printf("Press 1 if you want details of the student\nPress 2 if you want grades of the student \nPress 3 if you want details and Grades of the student\n");
    scanf("%d", &choice);
     if(choice==1){
printf("Enter roll No.: ");
    scanf("%d", &rollno);
      fun(rollno);
}
else if(choice==2){
printf("Enter roll No.: ");
    scanf("%d", &rollno);
student(students[rollno - 1]);
}
else if(choice==3){
printf("Enter roll No.: ");
    scanf("%d", &rollno);
fun(rollno);
student(students[rollno - 1]);
}
else{
printf("Invalid choice\n");
}
       if (rollno < 1 || rollno > 10) {
        printf("Invalid roll number\n");
        return 1;
    }

    

    return 0;
}
