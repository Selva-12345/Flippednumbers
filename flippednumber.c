// Write a program to find the number of bits to be flipped to convert the first given number to second number
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    
    int num = a ^ b;     // Calculating xor operation of a and b 
    int flipped_bit = 0; //Counting Number of set bit present
    
    while (num != 0)
    {
        num = num & (num-1); //syntax for the bitwise operation
        flipped_bit++;
    }
    printf("Flipped Bits : %d", flipped_bit);
    return 0;
}
