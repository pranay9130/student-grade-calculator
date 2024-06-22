#include <stdio.h>

int main() {
    int num_subjects, i;
    double total_grade = 0.0, average_grade;

    // Get the number of subjects from the user
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    // Input grades for each subject and calculate total grade
    for (i = 1; i <= num_subjects; i++) {
        double grade;
        printf("Enter grade for subject %d: ", i);
        scanf("%lf", &grade);
        total_grade += grade;
    }

    // Calculate the average grade
    average_grade = total_grade / num_subjects;

    // Display the average grade
    printf("Average grade: %.2lf\n", average_grade);

    return 0;
}

