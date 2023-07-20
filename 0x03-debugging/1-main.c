/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;


	
	while (i < 10)
	{
		putchar(i);/*We should type i++ because without it i will always equal 0.  */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
