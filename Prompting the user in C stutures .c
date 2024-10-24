//C structures
#include <stdio.h>
#include <string.h>

//defining a structure named book;
 struct Book{

	char title[30];
	int publication;
	char author[30];
	char ISBN[13];
	float price;
};

int main() {
	struct Book book1
	;
		//prompting  the user to enter values
    printf("Title: ");
    scanf("%29s", &book1.title);
    
    printf("Author: ");
    scanf("%29s", &book1.author);
    
    printf("Publication Year: ");
    scanf("%d", &book1.publication);
    
    printf("Price: ");
    scanf("%f", &book1.price);
    
    printf("ISBN: ");
    scanf("%12s", &book1.ISBN);
    
	//Final display of the book information
	printf("\nbook1 title: %s\n", book1.title);
	printf("book1 author: %s\n", book1.author);
	printf("book1 publication: %d\n", book1.publication);
	printf("book1 price: %.2f\n", book1.price);
    scanf("%book1 ISBN: %s\n", book1.ISBN);
	return 0;
}