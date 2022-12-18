

// write two sub  function where one function may return value and other is not ?

#include<stdio.h>

int add(int a,int b); // declare function with parameter/arguments ;

void name(); // declare a sub function which not return anything;

int main(){


    printf("\nthe sum is two number : %d" ,add(10,20));
    name();
}

// sub function

int add(int a , int b){

return a + b;

}

void name(){

printf("\nBaizid Bin Haider");

}

