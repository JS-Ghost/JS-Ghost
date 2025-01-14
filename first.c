#include<stdio.h>
int main(){
  int ID;
  float n, count = 0;
  printf("Enter your ID: ");
  scanf("%d", &ID);
  printf("Enter your number of unit: ");
  scanf("%f", &n);

  if(n <= 50.0){
    count = n * 6.0;
  }
  if(n > 50){
    count = n * 8.5;
  }
  else if(n > 100.0){
    count = n * 10.0;
  }
  if(count < 100){
    printf("Your charge is: 100 TK\n");
  }
  else if(count > 500){
    printf("Your charge is: %f\n",(count * 15.0)/100.0);
  }
  else{
    printf("Your charge is: %f\n",count);
  }
  return 0;
}
