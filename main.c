#include <stdio.h>
int main(void){

  float w, h, bmi;
  printf("Enter your weight(kg): ");
  scanf("%f",&w);
  printf("Enter your height(m): ");
  scanf("%f",&h);
  bmi=(w/(h*h));

  if(bmi<18.5){
    printf("You are underweight");
  }
  else if(bmi<=24.9){
    printf("You are normal weight");
  }
  else if(bmi<=29.9){
    printf("You are Overweight");
  }
  else if(bmi>30){
    printf("You are obersity");
  }
  else{
    printf("ERROR please try again");
    return main();
  }

}
