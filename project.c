#include <stdio.h>
#include <string.h>
#include <ctype.h>


// 1. Sum of first and last digit

void sumFirstLastDigit() {
    int num, first, last;
    printf("\nProgram 1: Sum of First and Last Digit\n");
    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 100;

    printf("First Digit: %d\n", first);
    printf("Last Digit: %d\n", last);
    printf("Sum = %d\n", first + last);
}


// 2. Count consonants in a sentence

void countConsonants() {
    char sentence[200];
    int count = 0;
    printf("\nProgram 2: Count Consonants in a Sentence\n");
    printf("Enter a sentence: ");
    getchar(); 
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (isalpha(ch) && !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) {
            count++;
        }
    }
    printf("Total number of consonants: %d\n", count);
}


// 3. Check divisibility by 3 and 5

int isDivisibleBy3And5(int n) {
    return (n % 3 == 0 && n % 5 == 0);
}

void checkDivisibility() {
    int num;
    printf("\nProgram 3: Check Divisibility by 3 and 5\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isDivisibleBy3And5(num))
        printf("%d is divisible by both 3 and 5.\n", num);
    else
        printf("%d is NOT divisible by both 3 and 5.\n", num);
}


// 4. Sum of two arrays using pointers

void sumOfArrays() {
    int n;
    printf("\nProgram 4: Sum of Two Arrays Using Pointers\n");
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];
    int *p1 = a, *p2 = b, *p3 = sum;

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) scanf("%d", p1 + i);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) scanf("%d", p2 + i);

    for (int i = 0; i < n; i++)
        *(p3 + i) = *(p1 + i) + *(p2 + i);

    printf("Sum of arrays:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(p3 + i));
    printf("\n");
}


// 5. Print pattern using nested loops

void printPattern() {
    printf("\nProgram 5: Print Pattern using Nested Loops\n");
    int i, j;
    for (i = 10; i >= 6; i--) {
        for (j = i; j >= 6; j--)
            printf("%d ", j);
        printf("\n");
    }
}


// MAIN FUNCTION

int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("C Language Practical Exam Menu\n");
        printf("==============================\n");
        printf("1. Sum of first and last digit\n");
        printf("2. Count consonants in sentence\n");
        printf("3. Check divisibility by 3 and 5\n");
        printf("4. Sum of two arrays (using pointers)\n");
        printf("5. Print pattern\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: sumFirstLastDigit(); break;
            case 2: countConsonants(); break;
            case 3: checkDivisibility(); break;
            case 4: sumOfArrays(); break;
            case 5: printPattern(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 0);

    return 0;
}
