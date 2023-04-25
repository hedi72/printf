#include "main.h"
#include <unistd.h>

/**
 * _puts - affiche une chaîne de caractères avec un retour à la ligne
 * @str: la chaîne de caractères à afficher
 *
 * Retour: void
 */
int _puts(char *str)
{
char *a = str;
while (*str)
_putchar(*str++);
return (str - a);
}

/**
 * _putchar - écrit le caractère c dans stdout
 * @c: Le caractère à afficher
 *
 * Retour: En cas de succès, retourne 1.
 * En cas d'erreur, -1 est retourné, et errno est défini correctement.
 */
int _putchar(int c)
{
static int i;
static char buf[OUTPUT_BUF_SIZE];

if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
{		
write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
