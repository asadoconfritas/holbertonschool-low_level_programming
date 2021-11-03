/**
 * print_name - <-
 * @name: of the person
 * @f: pointer
 * Return: end program
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
