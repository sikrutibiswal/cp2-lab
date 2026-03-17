#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
    int pincode;
};

struct Student {
    char name[50];
    int roll;
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter city: ");
    scanf("%s", s.addr.city);

    printf("Enter state: ");
    scanf("%s", s.addr.state);

    printf("Enter pincode: ");
    scanf("%d", &s.addr.pincode);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("City: %s\n", s.addr.city);
    printf("State: %s\n", s.addr.state);
    printf("Pincode: %d\n", s.addr.pincode);

    return 0;
}
