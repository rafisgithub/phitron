#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int room;
    char gender[10];
};

int compareByRoll(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return (studentA->roll - studentB->roll);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        struct Student students[K];
        for (int i = 0; i < K; i++) {
            scanf("%d %s %d %s", &students[i].roll, students[i].name, &students[i].room, students[i].gender);
        }

        qsort(students, K, sizeof(struct Student), compareByRoll);

        int Q;
        scanf("%d", &Q);

        printf("Case #%d:\n", t);
        for (int q = 1; q <= Q; q++) {
            int roomNumber;
            scanf("%d", &roomNumber);

            printf("Query #%d:\n", q);

            int found = 0;
            for (int i = 0; i < K; i++) {
                if (students[i].room == roomNumber) {
                    found = 1;
                    printf("%d %s %s\n", students[i].roll, students[i].name, students[i].gender);
                }
            }

            if (!found) {
                printf("No Student\n");
            }
        }
    }

    return 0;
}
