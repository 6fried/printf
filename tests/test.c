
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	long int l = INT_MAX;

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
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf(NULL);
	printf(NULL);
	_printf("%");
	printf("%");
	_printf("%!\n");
	printf("%!\n");
	_printf("%K\n");
	printf("%K\n");
	_printf("%d\n", 1024);
	_printf("%d\n", -1024);
	_printf("%d\n", 0);
	_printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	l += 1024;
	_printf("%d\n", l);
	l = INT_MIN;
	l -= 1024;
	_printf("%d\n", l);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("\n\n\n");
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%s", "This sentence is retrieved from va_args!\n");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%%\n");
	printf("Should print a single percent sign: %%\n");
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("css%ccs%scscscs\n", 'T', "Test");
	printf(NULL);
	printf("%c\n", '\0');
	printf("%");
	printf("%!\n");
	printf("%K\n");
	return (0);
}
