#include <stdio.h>

int main(void)
{
	char *frase = "  Lucho Patiño h  Prueba   NOs3";

	printf("El número de palabras es %d \n", how_many_words(frase));

	return (0);

}

int how_many_words(char *string)
{
	int words = 0, i;

	if (*string == 0)
	{
		return (0);
	}
	else if (*string != 32)
	{
		words++;
	}

	for (i = 1; *(string + i); i++)
	{
		if (string[i - 1] == 32 && (string[i] != 32 && string[i]))
			words++;
	}

	return (words);
}
