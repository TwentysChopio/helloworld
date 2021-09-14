#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
   
  //creating items purchased from the Supermarket 
  char supermarket[20]="Walmart Store";
  int ItunesCard=400;
  int AmazonCard=300;
  int Tampico=20;
  int RolexWatch=550;
  
  //using the printf function
  printf("Receipt from a sales Girl \n");
  printf("Enter supermarket name : \n");
    printf("%s", supermarket);
    printf("\n");
printf("Amount of ItunesCard Bought : \n");
  printf("%d", ItunesCard);
   printf("\n");
   printf("Amount of AmazonCard Bought : \n");
   printf("%d", AmazonCard);
    printf("\n");
    printf("Amount of Tampico Bought : \n");
    printf("%d", Tampico);
     printf("\n");
    printf("Price of A rolex Watch Purchased by the customer : \n");
    printf("%d", RolexWatch);
     printf("\n");
    
    
    //adding the values
    printf("Adding the values of item bought by the customer : \n");
   printf("%d", ItunesCard + AmazonCard + Tampico + RolexWatch);
    printf("\n");
    printf("Item purchased by customer : \n");
    printf("Total : %d", ItunesCard + AmazonCard + Tampico + RolexWatch);
    printf("\n");
    
  printf("Amount Payed by the Customer : \n");
  printf("%d", 2000);
    printf("\n");
  printf("Customer Balance :\n");
  printf("%d", 2000-1270);
    printf("\n");
  printf("Thanks for Using Walmart Store \n See you next Time");
	
	
	return 0;
}
