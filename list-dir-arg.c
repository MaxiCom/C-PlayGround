#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR						*dp;
	struct dirent *dirp;

	if (argc != 2)
	{
		printf("usage: %s dirname\n", argv[0]);

		return EXIT_FAILURE;
	}

	if ((dp = opendir(argv[1])) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
	}

	while ((dirp = readdir(dp)) != NULL)
	{
		printf("%s\n", dirp->d_name);
	}

	closedir(dp);

	return EXIT_SUCCESS;
}
