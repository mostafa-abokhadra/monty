#include "monty.h"

int main(int argc, char **argv __attribute__((unused)))
{
		int __attribute__((unused)) line_num = 0;
		FILE *fily;

		if (argc < 2)
			less_than_two();
		fily = fopen(argv[1], "r");
		if (!fily)
			not_found(argv[1]);
		return (0);
}
