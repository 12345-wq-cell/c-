#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    // Input: 10 students × 7 days
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int totalPresent[10] = {0};
    int dailyAttendance[7] = {0};

    // (a) Calculate total present days for each student
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j];
            dailyAttendance[j] += A[i][j];
        }
    }

    // (b) Identify student with highest attendance
    int maxAttendance = -1;
    int topperStudent = -1;

    for (i = 0; i < 10; i++) {
        if (totalPresent[i] > maxAttendance) {
            maxAttendance = totalPresent[i];
            topperStudent = i + 1; // student numbers are 1–10
        }
    }

    // (c) Find the day with lowest attendance
    int minDayAttendance = 1000;
    int lowestDay = -1;

    for (j = 0; j < 7; j++) {
        if (dailyAttendance[j] < minDayAttendance) {
            minDayAttendance = dailyAttendance[j];
            lowestDay = j + 1; // day numbers are 1–7
        }
    }

    // Output
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, totalPresent[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", 
           topperStudent, maxAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", lowestDay);

    return 0;
}
