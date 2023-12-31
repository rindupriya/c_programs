#include <stdio.h>
#include <string.h>

void combination(char[], int, int);
void swap(char[], int, int);

int main() {
    int flag = 0;
    char str[10];
    printf("Enter a string (max length 9): ");
    scanf("%9s", str); // Limit input length to prevent buffer overflow

    int end = strlen(str);
    int count = end; // Using strlen result for count

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (str[i] == str[j]) {
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        combination(str, 0, end - 1);
    } else {
        printf("Please enter distinct characters.\n");
    }

    return 0;
}

void combination(char *str, int start, int end) {
    printf("All possible combinations of given string %s:\n", str);
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(str, start, i);
            combination(str, start + 1, end);
            swap(str, i, start);
        }
    }
}
