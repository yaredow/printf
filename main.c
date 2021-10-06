#include <limits.h>

#include <stdio.h>

#include "main.h"



/**

 * main - Entry point

 *

 * Return: Always 0

 */

int main(void)
  
{
  
  int len;
  
  int len2;
  
  unsigned int ui;
  
  void *addr;
  int alen;
  

  
  int elen;
  

  
  char c = 'z';
  

  
  char *str = "sometimes    by"; 

  
  len = _printf("Let's try to printf a simple sentence.\n");
  
  len2 = printf("Let's try to printf a simple sentence.\n");
  
  ui = (unsigned int)INT_MAX + 1024;
  
  addr = (void *)0x7ffe637541f0;
  
  _printf("Length:[%d, %i]\n", len, len);
  
  printf("Length:[%d, %i]\n", len2, len2);
  
  _printf("Negative:[%d]\n", -762534);
  
  printf("Negative:[%d]\n", -762534);
  
  _printf("Unsigned:[%u]\n", ui);
  
  printf("Unsigned:[%u]\n", ui);
  
  _printf("Unsigned octal:[%o]\n", ui);
  
  printf("Unsigned octal:[%o]\n", ui);
  
  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  
  printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  
  _printf("Character:[%c]\n", 'H');
  
  printf("Character:[%c]\n", 'H');
  
  _printf("String:[%s]\n", "I am a string !");
  
  printf("String:[%s]\n", "I am a string !");
  
  _printf("Address:[%p]\n", addr);
  
  printf("Address:[%p]\n", addr);
  
  len = _printf("Percent:[%%]\n");
  
  len2 = printf("Percent:[%%]\n");
  
  _printf("Len:[%d]\n", len);
  
  printf("Len:[%d]\n", len2);
  
  _printf("Unknown:[%r]\n");
  
  printf("Unknown:[%r]\n");














  
  /*char *str = NULL;*/
  
  /*unsigned int ui;*/
  
  /*void *addr;*/
  

  
  len = _printf("Let's try to printf a simple sentence.\n");
  
  len2 = printf("Let's try to printf a simple sentence.\n");
  
  _printf("Length:[%d, %i]\n", len, len);
  
  printf("Length:[%d, %i]\n", len2, len2);
  
  _printf("Negative:[%d]\n", -762534);
  
  printf("Negative:[%d]\n", -762534);
  
  _printf("Character:[%c]\n", 'H');
  
  printf("Character:[%c]\n", 'H');
  
  _printf("String:[%s]\n", "I am a string !");
  
  printf("String:[%s]\n", "I am a string !");
  
  _printf("Len:[%d]\n", len);
  
  printf("Len:[%d]\n", len2);
  
  printf("=====================\n");
  
  printf("*****CHAR*****\n");
  
  printf("=====================\n");
  
  printf("Expected   : %c\n", 'a');
  
  _printf("Actual     : %c\n", 'a');
  
  elen = printf("Expected   : %c\n", c);
  
  alen = _printf("Actual     : %c\n", c);
  
  printf("Expected   : %i\n", elen);
  
  printf("Actual     : %i\n", alen);
  
  printf("Expected   : %cc\n", 'a');
  
  _printf("Actual     : %cc\n", 'a');
  
  printf("Expected   : %c\n", 53);
  
  _printf("Actual     : %c\n", 53);
  
  printf("Expected   : %c.\n", '\0');
  
  _printf("Actual     : %c.\n", '\0');
  
  printf("Expected   : %%%c\n", 'y');
  
  _printf("Actual     : %%%c\n", 'y');
  
  printf("=====================\n");
  
  printf("*****STRINGS*****\n");
  
  printf("=====================\n");
  
  alen = elen = 0;
  
  printf("Expected   : %s\n", "holberton");
  
  _printf("Actual     : %s\n", "holberton");
  
  printf("Expected   : %s$\n", "");
  
  _printf("Actual     : %s$\n", "");
  
  elen = printf("Expected   : %s\n", str);
  
  alen = _printf("Actual     : %s\n", str);
  
  elen = printf("%s\n", "1");
  
  alen = _printf("%s\n", "1");
  
  printf("Expected   : %i\n", elen);
  
  printf("Actual     : %i\n", alen);
  
  printf("Expected   : %sschool\n", "holberton");
  
  _printf("Actual     : %sschool\n", "holberton");
  
  /*elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);*/
  
  /*alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton",0);*/
  
  printf("Expected: %d\n", elen);
  
  _printf("Actual  : %d\n", alen);
  
  printf("Expected   :%%%d\n", len);
  
  _printf("Actual : %%%d\n", len);
  
  _printf("Len:[%d]\n", len);
  
  printf("Len:[%d]\n", len2);
  
  /*printf("Unknown:[%d]\n");*/
  
  _printf("Unknown:[%r]\n", "strings");
  
  _printf("Unknown:[%r]\n");
  
  _printf("word %b\n", 10);
  
  len =_printf("word %R\n", str);
  
  _printf("%d\n", len);

  return (0);
  
}
