#include <stdio.h>
int main()
{
    int marks[10][3];
    int total_marks[10] = {0};
    int highest_marks[3] = {0};
    int highest_marks_no[3] = {0};
    int highest_total_marks = 0, highest_totalmarks_no = 0;

    for(int i = 0; i<10; i++)
    {
        printf("Enter marks for student %d (Subject1, Subject2, Subject3): ",i+1);
        for(int j = 0; j<3; j++)
        {
            scanf("%d",&marks[i][j]);
            total_marks[i] += marks[i][j];

            if(marks[i][j] > highest_marks[j])
            {
                highest_marks[j] = marks[i][j];
                highest_marks_no[j] = i+1;
            }
        }
    

    if(total_marks[i] > highest_total_marks)
    {
        highest_total_marks = total_marks[i];
        highest_totalmarks_no = i+1;
    }
    }

    printf("\n Total Marks for each Students: \n");
    for(int i = 0;i<10;i++)
    {
        printf("Student [%d] : %d\n",i+1,total_marks[i]);
    }

    printf("Highest marks in each subject: \n");
    for(int i = 0;i<3;i++)
    {
        printf("Highest marks in Subject[%d] : %d (Student Roll Number : %d)\n",i+1,highest_marks[i],highest_marks_no[i]);
    }

    printf("Student who obtained highest total marks : Student %d with %d marks.",highest_totalmarks_no,highest_total_marks);

    return 0;
}
