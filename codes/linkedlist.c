#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create list by appending nodes
void createList() {
    int n, val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &val);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            struct Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}

// Display the list
void displayList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert at position
void insertElement() {
    int pos, val;
    printf("Enter position to insert (starting from 0): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;
        if (temp == NULL) {
            printf("Position out of bounds!\n");
            free(newNode);
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    printf("Node inserted.\n");
}

// Delete from position
void deleteElement() {
    int pos;
    printf("Enter position to delete (starting from 0): ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;

    if (pos == 0) {
        head = head->next;
        free(temp);
        printf("Node deleted.\n");
        return;
    }

    for (int i = 0; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
    printf("Node deleted.\n");
}

// Search by value
void searchElement() {
    int val, pos = 0, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &val);

    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            printf("Value found at position %d\n", pos);
            found = 1;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (!found)
        printf("Value not found.\n");
}

// Update value at position
void updateElement() {
    int pos, newVal;
    printf("Enter position to update: ");
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &newVal);

    struct Node* temp = head;
    for (int i = 0; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    temp->data = newVal;
    printf("Node updated.\n");
}

// Sort linked list using Bubble Sort
void sortList() {
    struct Node *i, *j;
    int temp;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Create List\n");
        printf("2. Display List\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Update Element\n");
        printf("7. Sort List\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createList(); break;
            case 2: displayList(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: searchElement(); break;
            case 6: updateElement(); break;
            case 7: sortList(); break;
            case 8: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
