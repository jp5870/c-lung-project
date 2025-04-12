#include <stdio.h>

int main() {
    int score;
    char grade;

    // Step 1 Grade Calculation
    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    if (score >= 98)
        grade = 'A';
    else if (score >= 88)
        grade = 'B';
    else if (score >= 78)
        grade = 'C';
    else if (score >= 68)
        grade = 'D';
    else if (score >= 58)
        grade = 'E';
    else
        grade = 'F';

    printf("Your grade is %c\n", grade);

    // Step 2 Additional Comments 
    switch (grade) {
        case 'A':
            printf("Excellent work\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed. You could do better.\n");
            break;
        case 'E':
            printf("You passed. But you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    // Step 3 Eligibility Check
    if (grade != 'F') {
        printf("Congratulations You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

  return 0;
}
