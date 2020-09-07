/******************************************************************************
 * Copyright (C) 2020 by Alessandro Mancinelli
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alessandro Mancinelli is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Computation of basic stat analisys to a set of data
 *
 * This code performs and print the minimum, maximum, mean and median of the 
 * character array "test" defined in main. Moreover, it also generate a variable
 * called "test_sorted" containing the sorted values of the variable "test"
 *
 * @author Alessandro Mancinelli
 * @date 09/07/2020
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints some statistics of an unsigned char list of integers
 *
 * This function take as input an unsigned char array of integer values. 
 * Will print the minimum, maximum, mean and median value of the provided array.
 *
 * @param input_char_var The unsigned char variable containing the list of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return print the statistics on screen 
 */
void print_statistics(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Print the unsigned char list of integers given as input
 *
 * This function take as input an unsigned char array of integer values. 
 * Will print the array.
 *
 * @param input_char_var The unsigned char variable containing the list of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return print the array on screen 
 */
void print_array(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Print the unsigned char list of integers given as input.
 *
 * This function take as input an unsigned char array of integer values. 
 * Will print the array. One array value per line. 
 *
 * @param input_char_var The unsigned char variable containing the list of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return print the array on screen one array value per line.
 */
void print_array_long(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Return the median of the array passed as input
 *
 * This function take as input an unsigned char array of integer values. 
 * Will output a float value containing the median of the array provided in the input.
 *
 * @param input_char_var The unsigned char variable containing the list of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return a float value containing the median of the array provided in the input 
 */
float find_median(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Return the mean of the array passed as input
 *
 * This function take as input an unsigned char array of integer values. 
 * Will output a float value containing the mean of the array provided in the input.
 *
 * @param input_char_var The unsigned char variable containing the array of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return a float value containing the mean of the array provided in the input 
 */
float find_mean(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Return the maximum of the array passed as input
 *
 * This function take as input an unsigned char array of integer values. 
 * Will output a integer value containing the maximum of the array provided in the input.
 *
 * @param input_char_var The unsigned char variable containing the array of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return a integer value containing the maximum of the array provided in the input 
 */
unsigned int find_maximum(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Return the minimum of the array passed as input
 *
 * This function take as input an unsigned char array of integer values. 
 * Will output a integer value containing the minimum of the array provided in the input.
 *
 * @param input_char_var The unsigned char variable containing the array of integers
 * @param array_size The unsigned int variable containing the number of elements into the array
 *
 * @return a integer value containing the minimum of the array provided in the input 
 */
unsigned int find_minimum(unsigned char * input_char_var, unsigned int array_size);

/**
 * @brief Return the array provided in input sorted from largest to smallest
 *
 * This function take as input an unsigned char array of integer values. 
 * Will modify the array in input by sorting it. 
 *
 * @param sorted_array The unsigned char variable containing the array of integers to be sorted
 * @param array_size The unsigned int variable containing the number of elements into the array
 *	
 * @return an unsigned char array containing the sorted array provided in the input 
 */
void sort_array(unsigned char * sorted_array, unsigned int array_size);

#endif /* __STATS_H__ */
