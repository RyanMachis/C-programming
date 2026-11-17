#include <stdio.h>
#include <string.h>

struct product {
	int Pcode;
	char name[50];
	float UnitPrice;
	int quantity;
}p1;

int main() {
	struct product p1;
	
   printf("enter product code: ");
   scanf("%d", &p1.Pcode);
   
   while(getchar() != '\n');
   
   printf("enter product name: ");
   fgets(p1.name, sizeof(p1.name), stdin);
   
   p1.name[strcspn(p1.name, "\n")] = '\0';
   
   printf("enter unit price: ");
   scanf("%f", &p1.UnitPrice);
   
   printf("enter total stock: ");
   scanf("%d", &p1.quantity);
   
   float totalStock = p1.UnitPrice * p1.quantity;
   
   printf("Product code: %d\n", p1.Pcode);
   printf("Product name: %s\n", p1.name);
   printf("unit price: %.2f\n", p1.UnitPrice);
   printf("Total quantity: %d\n", p1.quantity);
   printf("total stock is: %.2f\n", totalStock);
   
   return 0;
}