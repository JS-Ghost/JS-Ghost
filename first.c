#include<stdio.h>
int main(){
  int ID;
  float n, count = 0.0;
  printf("Enter your ID: ");
  scanf("%d", &ID);
  printf("Enter your number of unit: ");
  scanf("%f", &n);

  if(n <= 50.0){
    count = n * 6.0;
  }
  else if(n <= 100.0){
    count = 300.0 + ((n - 50.0) * 8.5);
  }
  else{
    count = 300.0 + (50.0 * 8.5) + ((n - 100.0) * 10.0);
  }
  if(count < 100.0){
    count  = 100.0;
  }
  if(count > 500){
    count += 0.15;
  }
  else{
    printf("Your charge is: %.2f TK\n",count);
  }
  return 0;
}
