#include<stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp;
    temp = *a;  // Store the value at address a in temp
    *a = *b;    // Assign the value at address b to address a
    *b = temp; 
    // Assign the value in temp to address b 
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1,&num2);

    // Output the swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}