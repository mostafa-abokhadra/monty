#include "monty.h"

void decide_arg_validity(char *str, unsigned int line_num, FILE **fily)
{
	char *token;
	char *cp = _strdup(str);
	bool valid = 1;
	int i;

	token = strtok(cp, " \n\t$");
	if (strcmp(token, "push") == 0)
	{
		token = strtok(NULL, " \n\t$");
		if (!token)
		{
			valid = 0;
			goto out;
		}
		for (i = 0; token[i] ; i++)
		{
			
			if ((token[i]) >= '0' && (token[i]) <= '9')
				continue;
			valid = 0;
		}
	}
	out:
	free(cp);
	if (!valid)
		invalid_arg(line_num, str, fily);

}
