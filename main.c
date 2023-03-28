#include <stdio.h>

const int Size = 4;

void displayAsArray( int valuesAsArray[])
{
    int i = 0;  
    for( i = 0; i < Size; i++) {
        printf("%d ", valuesAsArray[ i]);
    }
    printf("\n");
}

void displayUsingPointer( int *pArray)
{
    int i = 0;    
    for( i = 0; i < Size; i++) {
        printf("%d ", pArray[ i]);
    }
    printf("\n");  
}

int main(void) {

	int values[] = {3,5,7,9};
    int *pValue = values;
    int *pFirstOne = &values[0];

	displayAsArray( values);
	displayAsArray( pValue);
	displayAsArray( pFirstOne);

	displayUsingPointer( values);
	displayUsingPointer( pValue);
	displayUsingPointer( pFirstOne);

	// char letters[] = "catalepsy";  
	// printf("Word is: %s\n", letters);
	
	// char *pWord = letters;
	// printf("Using pointer: %s\n", pWord);
 
	// pWord++;
	// printf("After pointer increment: %s\n", pWord);
	
	return 0;
}