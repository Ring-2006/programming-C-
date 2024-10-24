//C structures
#include <stdio.h>
#include <string.h>

//defining a structure named book
struct Book 
{
	char title[30];
	int publication;
	char author[30];
	char ISBN[13];
	float price;
}book1;

int main() {

	strcpy(book1.title, "Introduction to C structures");//title of the book
	book1.publication = 2022;//year of publication
	strcpy(book1.author, "Elijah Oduor");//author of the book
	strcpy(book1.ISBN, "1235678943562");
	book1.price = 49.99;
	
	//Final display of the book information
	printf("book1 title: %s\n", book1.title);
	printf("book1 author: %s\n", book1.author);
	printf("book1 publication: %d\n", book1.publication);
	printf("book1 ISBN: %s\n", book1.ISBN);
	printf("book1 price: %.2f\n", book1.price);

	return 0;
}