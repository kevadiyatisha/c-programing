#include<stdio.h>

void main() 
{
    int score;
    
    printf("Enter the student's exam score (0-100): ");
    scanf("%d", &score);
    if (score != 1 || score < 0 || score > 100) 
    {
        printf("Invalid input. Please enter a score between 0 and 100.\n");
        
    }

    if (score >= 90) 
    {
        printf("Grade A\n");
    } else if (score >= 80) 
    {
        printf("Grade B\n");
    } else if (score >= 70) 
    {
        printf("Grade C\n");
    } else if (score >= 60) 
    {
        printf("Grade D\n");
    } else 
    {
        printf("Grade F\n");
    }

    
}

