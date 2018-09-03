//
//  Calculator.c
//  Calculator
//
//  Created by Juan Manuel Ledesma Rangel on 02/09/18.
//

#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    int a = 0;
    int b = 0;

    scanf("%i%*c", &a);
    scanf("%i%*c", &b);
    
    int res = a + b;
    
    printf("%i", res);
    
    return 0;
}