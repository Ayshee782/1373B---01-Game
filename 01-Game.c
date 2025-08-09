#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[105];
        scanf("%s", s);

        int count0 = 0, count1 = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }

        int moves = (count0 < count1) ? count0 : count1;

        if (moves % 2 == 1)
            printf("DA\n");  // Alice wins
        else
            printf("NET\n"); // Bob wins
    }
    return 0;
}

