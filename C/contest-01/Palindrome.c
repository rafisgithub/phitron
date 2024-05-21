#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define MAX_LEN 100

int min(int a, int b) {
    return a < b ? a : b;
}

int minPalindromeCost(char *str, int N) {
    int freq[26] = {0}; // Frequency of each letter
    int totalCost = 0;

    // Count the frequency of each letter
    for (int i = 0; i < N; i++) {
        char c = tolower(str[i]);
        freq[c - 'a']++;
    }

    // Calculate cost for transforming into palindrome
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) { // If the frequency is odd
            if (isupper(i + 'a')) {
                totalCost += 2; // Change uppercase to lowercase and then to another lowercase
            } else {
                totalCost += 1; // Change lowercase to another lowercase
            }
        }
    }

    // Adjust cost to make the resulting string a palindrome
    int oddFreq = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddFreq++;
            totalCost += (isupper(i + 'a')) ? 2 : 1; // Add cost to make it a palindrome
            if (oddFreq > 1) break; // Only need to adjust once
        }
    }

    return totalCost;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char str[MAX_LEN + 1];
        scanf("%s", str);

        int result = minPalindromeCost(str, N);
        printf("%d\n", result);
    }

    return 0;
}
