#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adj[5000][5000];

int main() {
    int n;
    int i, j;
    long long in_degree = 0, out_degree = 0;
    double timeMeasure;
    clock_t start, finish;

    printf("Enter number of vertices : ");
    scanf("%d", &n);

    if (n > 5000 || n <= 0) {
        printf("Invalid input! n must be between 1 and 5000.\n");
        return 0;
    }

    srand(time(NULL));

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adj[i][j] = rand() % 4;
        }
    }

    start = clock();

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (adj[i][j] > 0) {
                out_degree++;
                in_degree++;
            }
        }
    }

    finish = clock();

    printf("Sum of In-degree is = %lld\n", in_degree);
    printf("Sum of Out-degree is = %lld\n", out_degree);

    if (in_degree == out_degree)
        printf("Sum of in-degree and sum of out-degree are same\n");
    else
        printf("Sum of in-degree and sum of out-degree are not same\n");

    timeMeasure = (double)(finish - start) / CLOCKS_PER_SEC * 1000.0;
    printf("Degree computation time: %.3f ms\n", timeMeasure);

    return 0;
}
