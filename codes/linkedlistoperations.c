#include <stdio.h>
#define SIZE 100

int data[SIZE];
int next[SIZE];
int head = -1;
int free_index = 0;

// Initialize free list
void init() {
    for (int i = 0; i < SIZE - 1; i++)
        next[i] = i + 1;
    next[SIZE - 1] = -1;
}

// Insert at position (1-based index)
void insert() {
    int pos, value;
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the element: ");
    scanf("%d", &value);

    if (free_index == -1) {
        printf("List is full.\n");
        return;
    }

    int new_node = free_index;
    free_index = next[free_index];
    data[new_node] = value;

    if (pos == 1) {
        next[new_node] = head;
        head = new_node;
        return;
    }

    int temp = head;
    for (int i = 1; i < pos - 1 && temp != -1; i++)
        temp = next[temp];

    if (temp == -1) {
        printf("Invalid position\n");
        next[new_node] = free_index;
        free_index = new_node;
        return;
    }

    next[new_node] = next[temp];
    next[temp] = new_node;
}

// Delete at position (1-based index)
void delete() {
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (head == -1) {
        printf("List is empty.\n");
        return;
    }

    int toDelete;
    if (pos == 1) {
        toDelete = head;
        head = next[head];
    } else {
        int temp = head;
        for (int i = 1; i < pos - 1 && temp != -1; i++)
            temp = next[temp];
        if (temp == -1 || next[temp] == -1) {
            printf("Invalid position\n");
            return;
        }
        toDelete = next[temp];
        next[temp] = next[toDelete];
    }

    next[toDelete] = free_index;
    free_index = toDelete;
}

// Search value
void search() {
    int value, pos = 1;
    printf("Enter the element to search: ");
    scanf("%d", &value);

    int temp = head;
    while (temp != -1) {
        if (data[temp] == value) {
            printf("%d found at position %d\n", value, pos);
            return;
        }
        temp = next[temp];
        pos++;
    }
    printf("%d not found in the list\n", value);
}

void display() {
    int temp = head;
    printf("Current List: ");
    while (temp != -1) {
        printf("%d\t", data[temp]);
        temp = next[temp];
    }
    printf("\n");
}

int main() {
    init();
    int choice;
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Search for an element\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: search(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
        display();
    }
}