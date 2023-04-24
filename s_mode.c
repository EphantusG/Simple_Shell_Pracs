#include "main.h"

/**
 * is_interactive - Check shell mode
 * Return: 1 if interactive 0 otherwise
 */

int is_interactive(void)
{
	return (isatty(STDIN_FILENO) && getenv("PS1"));
}

/**
 * delim_checker - Checks for delimiters
 * @c:character to check
 * @del:delimiter string
 * Return: 1 if delimiter 0 otherwise
 */

int delim_checker(char c, char *del)
{
	while (*del)
		if (*del++ == c)
			return (1);
	return (0);
}

/**
 * alpha_checker - Checks whether a character is an alphabet
 * @c: Character checked
 * Return: 1 if an alphabet, 0 otherwise
 */

int alpha_checker(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'c' && c <= 'z'))
		return (1);
	else
		return (0);
	return (0);
}

/**
 * str_to_int - converts strings to int
 * Considers positive and negative signage
 * @s: String to convert
 * Return: Converted number, otherwise 0
 */

int str_to_int(char *s)
{
int i, sign, tracker, int_val;
unsigned int val;
sign = 1;
tracker = 0;
int_val = 0;
i = 0;

for (i = 0; s[i] != '\0' && tracker != 2; i++)
{
	if (s[i] == '-')
		sign *= -1;
	if (s[i] >= '0' && s[i] <= '9')
	{
		tracker = 1;
	val *= 10;
	val += (s[i] - '0');
	}
	else if (tracker == 1)
		tracker = 2;
}
if (sign == -1)
	int_val = -val;
	else
	int_val = val;
	return (int_val);
}

/**
 * str_to_int_error - handle atoi error
 * @s: strings to convert
 * Return: -1 if error, coverted number otherwise
 */

int str_to_int_error(char *s)
{
	int final_val = str_to_int(s);

	if (final_val == 0 && strcmp(s, "0") != 0)
		return (-1);
	return (final_val);
}
