#include <stdio.h>

#define BUFFER_SIZE 5

int insertSample(int buffer[], int head, int *count, int value) {
    buffer[(head + *count) % BUFFER_SIZE] = value;

    if (*count < BUFFER_SIZE) {
        (*count)++;
    } else {
        head = (head + 1) % BUFFER_SIZE;
    }
    return head;
}

int printSamples(int buffer[], int head, int count) {
    int i;
    printf("Stored samples (oldest to newest): ");
    for (i = 0; i < count; i++) {
        printf("%d ", buffer[(head + i) % BUFFER_SIZE]);
    }
    printf("\n");
    return 0;
}

int main() {
    int buffer[BUFFER_SIZE];
    int head = 0;
    int count = 0;
    int choice, value;

    while (1) {
        printf("\n1. Insert value\n2. Print buffer\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            head = insertSample(buffer, head, &count, value);
        } else if (choice == 2) {
            printSamples(buffer, head, count);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
