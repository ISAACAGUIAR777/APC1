#include <stdio.h>

int main() {
  printf("\x1b[32m--------------------------------\n");
  printf("     N O T A    L E G A L       \n");
  printf("--------------------------------\x1b[0m\n");
  printf("\x1b[31mITEM            QTD    VALOR   \n");
  printf("%-15s %03i %8.2f\n", "Banana Nanica", 1, 15.00);
  printf("%-15s %03i %8.2f\n", "Maca Fuji", 10, 50.00);
  printf("%-15s %03i %8.2f\n\x1b[0m", "Uva globo", 5, 26.00);
 // printf("Banana nanica       1  R$ 15.00 \n");
  //printf("Maca fuji           10 R$ 50,00 \n");
  //printf("Uva globo           5  R$ 26,00 \n"); 
  printf("--------------------------------\n");
  printf("\x1b[36mTOTAL-----------:R$ %8.2f\n\x1b[3m", 91.00);
    
    return 0;
}