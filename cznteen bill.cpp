#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int bill[n][m];

    // Read bills
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];
    int dayTotal[m];

    // Initialize totals
    for (int i = 0; i <n; i++) studentTotal[i] = 0;
    for (int j = 0; j <m; j++) dayTotal[j] = 0;

    // Calculate totals
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    // Print student totals
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }

    // Find day with highest collection
    int maxDayAmount = -1, maxDay = -1;
    for (int j = 0; j < m; j++) {
        if (dayTotal[j] > maxDayAmount) {
            maxDayAmount = dayTotal[j];
            maxDay = j + 1; // day number
        }
    }

    printf("\nHighest collection on Day %d\n", maxDay);

    // Find highest spender(s)
    int maxSpend = -1;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");

    // Print all students who match maxSpend
    int firstPrinted = 0;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (firstPrinted) printf(" and ");
            printf("Student %d", i + 1);
            firstPrinted = 1;
        }
    }

    return 0;
}
