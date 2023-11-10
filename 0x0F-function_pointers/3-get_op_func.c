#include "3-calc.h"
/**
 * get_op_func - returns the appropriate operation function.
 * @s: operator selector.
 *
 * Return: pointer to respective operation function.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 10)
{
if (s[0] == ops->op[i])
break;
i++;
}
return (ops[i / 2].f);
}
