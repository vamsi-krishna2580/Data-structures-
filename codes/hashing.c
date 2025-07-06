#include <stdio.h>
#define SIZE 10
#define EMPTY -1

// Hash table and basic functions
int hashTable[SIZE];

// Hash function
int hash(int key) {
    return key % SIZE;
}

// Insert using linear probing
void insert(int key) {
    int index = hash(key);
    int start = index;

    while (hashTable[index] != EMPTY) {
        index = (index + 1) % SIZE;
        if (index == start) {
            printf("Hash table is full. Cannot insert %d\n", key);
            return;
        }
    }

    hashTable[index] = key;
}

// Search for a key
int search(int key) {
    int index = hash(key);
    int start = index;

    while (hashTable[index] != EMPTY) {
        if (hashTable[index] == key)
            return index;
        index = (index + 1) % SIZE;
        if (index == start)
            break;
    }

    return -1; // Not found
}

// Display the hash table
void display() {
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != EMPTY)
            printf("[%d] -> %d\n", i, hashTable[i]);
        else
            printf("[%d] -> EMPTY\n", i);
    }
}

int main() {
    // Initialize the hash table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = EMPTY;

    // Insert some keys
    insert(23);
    insert(43);
    insert(13);
    insert(27);
    insert(33);
    insert(56);

    // Display table
    display();

    // Search for a key
    int key = 27;
    int pos = search(key);
    if (pos != -1)
        printf("Key %d found at index %d\n", key, pos);
    else
        printf("Key %d not found\n", key);

    return 0;
}