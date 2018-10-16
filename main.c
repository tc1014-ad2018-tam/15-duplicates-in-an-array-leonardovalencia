 /*
 * Author: Leonardo Valencia
 * Date: 16.10.2018
 * Contact: A01412017@ITESM.MX
 */
#include <stdio.h>

int main() {
    int n;
    int Duplicates;

    //As usual I ask the user for the number of inputs he is going to use
    printf("How many numbers are you going to introduce?");
    scanf("%i", &n);

    int numbers[n];

    //Here I store the values of the array.
    for(int h = 0; h < n; h++){
        printf("Give me a number: \n");
        scanf("%i", &numbers[h]);

    }
    for(int j = 0; j < n; j++){
        for(int s = j + 1; s < n; s++){
            if (numbers[j] == numbers[s]){
                Duplicates++;
            }
        }
    }

    printf("The total number of duplicates is: %i", Duplicates);

    return 0;
}