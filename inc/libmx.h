#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_strnew(const int size);
char *mx_nbr_to_hex(unsigned long nbr);
int mx_isalpha(int с);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_itoa(int number);
void mx_foreach(int *arr, int size, void(*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_strcmp(const char *s1, const char *s2);
void swap_str(char **a, char **b);
int mx_quicksort(char **arr, int left, int right);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);












#endif




