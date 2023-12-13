#include <stdio.h>

void print_menu(char **menu) {
    printf("Menu options:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, menu[i]);
    }
}

int main() {
    char *options[] = {"File", "Edit", "View", "Insert", "Help"};
    int choice;

    print_menu(options);

    printf("Select your option: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("You have selected %s Menu\n", options[choice - 1]);
    } else {
        printf("Invalid option selected\n");
    }

    return 0;
}
