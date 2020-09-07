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
 * @file stats.c
 * @brief Computation of basic stat analisys to a set of data
 *
 * This code performs and print the minimum, maximum, mean and median of the 
 * character array "test" defined in main. Moreover, it also generate a variable
 * called "test_sorted" containing the sorted values of the variable "test"
 *
 * @author Alessandro Mancinelli
 * @date 09/07/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned int max_value, min_value;
  float mean_value, median_value;	
  //Print the array
  print_array(test , SIZE);

  //Evaluate the sorted array, after that the array test is sorted:
  printf("\n");
  sort_array(test , SIZE);
  printf("\n");

  print_statistics(test, SIZE);  
    
}

void print_statistics(unsigned char * input_char_var, unsigned int array_size){

  unsigned int max_value, min_value;
  float mean_value, median_value;
  
  //Evaluate and print the max and the min value of the array:
  max_value = find_maximum(input_char_var , array_size);
  printf("Max value of the array : %d.\n",max_value);
  printf("\n");
  
  min_value = find_minimum(input_char_var , array_size);
  printf("Min value of the array : %d.\n",min_value);
  printf("\n");
  
  //Evaluate and print the mean value of the array:
  mean_value = find_mean(input_char_var , array_size);
  printf("Mean value of the array : %f.\n",mean_value);
  printf("\n"); 
  
  //Evaluate and print the mean value of the array:
  median_value = find_median(input_char_var , array_size);
  printf("Median value of the array : %f.\n",median_value);
  printf("\n"); 

  
}

void print_array_long(unsigned char * input_char_var, unsigned int array_size){
 for(int i = 1 ; i <= array_size ; i++){
 printf("Value of array component number %d : %d.\n",i,input_char_var[i-1]);
 }
}

void print_array(unsigned char * input_char_var, unsigned int array_size){
 printf("Values of the array: [");
 for(int i = 1 ; i < array_size ; i++){
 printf("%d , ",input_char_var[i-1]);
 }
 printf("%d].\n", input_char_var[array_size-1]);
}

float find_median(unsigned char * input_char_var, unsigned int array_size){
  //Order the array from the smaller to the bigger:
 unsigned char temp;
 float median_value;
 //Based on the bubblesort algorithm
 for(int j = 0 ; j < array_size-1 ; j++){
 	for (int i = 0 ; i < array_size-1 ; i++){
 		if(input_char_var[i] > input_char_var[i+1]){
 			temp = input_char_var[i];
 			input_char_var[i] = input_char_var[i+1];
 			input_char_var[i+1] = temp;
 		}
 	}
 }  
 //if the array_size is even: 
 if (array_size % 2 == 0){
 	median_value = (input_char_var[array_size/2] + input_char_var[array_size/2 - 1])/2;
 }
 //if the array_size is odd:
 else{
 	median_value = input_char_var[(int) array_size/2 ];
 }
}

float find_mean(unsigned char * input_char_var, unsigned int array_size){
  float mean_value;
  for (int i = 0 ; i < array_size ; i++){
  	mean_value += input_char_var[i];
  }
  mean_value = mean_value/array_size ;
}

unsigned int find_maximum(unsigned char * input_char_var, unsigned int array_size){
  unsigned int max_value;
  max_value = input_char_var[0];	
  for (int i = 1 ; i < array_size ; i++){
  	if (input_char_var[i] > max_value){
  		  max_value = input_char_var[i];
  	}
  }
  return max_value;	
}

unsigned int find_minimum(unsigned char * input_char_var, unsigned int array_size){
  unsigned int min_value;
  min_value = input_char_var[0];	
  for (int i = 1 ; i < array_size ; i++){
  	if (input_char_var[i] < min_value){
  		  min_value = input_char_var[i];
  	}
  }
  return min_value;		
}

void sort_array(unsigned char * sorted_array, unsigned int array_size){
 unsigned char temp;
 //Based on the bubblesort algorithm
 for(int j = 0 ; j < array_size-1 ; j++){
 	for (int i = 0 ; i < array_size-1 ; i++){
 		if(sorted_array[i] < sorted_array[i+1]){
 			temp = sorted_array[i];
 			sorted_array[i] = sorted_array[i+1];
 			sorted_array[i+1] = temp;
 		}
 	}
 }
 
 //Print the values of the sorted array: 
 printf("Values of the sorted array: [");
 for(int i = 1 ; i < array_size ; i++){
 printf("%d , ",sorted_array[i-1]);
 }
 printf("%d].\n", sorted_array[array_size-1]);
}

/* Add other Implementation File Code Here */
