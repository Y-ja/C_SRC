#include <stdio.h>

int main() {
    int score;
    int grade;

    // 사용자로부터 점수 입력 받기
    printf("Enter your score: ");
    scanf("%d", &score);

    
    if (score >= 0 && score <= 100) {
        grade = score / 10;
    } else {
        printf("Invalid score\n");
        return 1;
    }

    switch (grade) {
        case 10: 
        case 9: 
            printf("Grade: A\n");
            break;
        case 8:  
            printf("Grade: B\n");
            break;
        case 7:  
            printf("Grade: C\n");
            break;
        case 6:  
            printf("Grade: D\n");
            break;
        default: 
            printf("Grade: F\n");
            break;
    }

    return 0;
}