/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Assessment 1 Coursera
 * @brief Coursera Week 1 Assignment
 * A couple of functions that can analyze an array , and return mean, median,
 * maximum and minimum. There are functions that can sort and print given array.
 * 
 *
 * @author Pranjal Kapur
 * @date 10th August 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
double find_mean(int test[], int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+test[i];
    }
    return (double)sum/(double)n;
  }
  
void sort_array(int test[], int n){
  int temp=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(test[i]>test[j]){
        temp=test[i];
        test[i]=test[j];
        test[j]=temp;
        }
      }
    }
  }
  
double find_median(int test[], int n){
  sort_array(test,n);
  if(n%2!=0){
    return (double)test[n/2];
    }
    return (double)((test[(n-1)/2]+test[n/2])/2.0);
  }


  
double find_maximum(int test[],int n){
  sort_array(test,n);
  return (double)test[0];
  }
  
double find_minimum(int test[], int n){
  sort_array(test,n);
  return (double)test[n-1];
  }
  
void print_statistics(int test[], int n){
  printf("%f",find_maximum(test,n));
  printf("%f",find_minimum(test,n));
  printf("%f",find_mean(test,n));
  printf("%f",find_median(test,n));
  }
  
void print_array(int test[],int n){
  for(int i=0;i<n;i++){
    printf("%d",test[i]);
    }
  }

int main() {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  int n=sizeof(test)/sizeof(test[0]);
  return 0;

}

/* Add other Implementation File Code Here */
