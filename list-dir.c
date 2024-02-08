#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(void)
{
	DIR						*dp;
	struct dirent	*dirp;

	if ((dp = opendir(".")) == NULL)
	{
		printf("Can't open current dir\n");

		return EXIT_FAILURE;
	}

	while ((dirp = readdir(dp)) != NULL)
	{
		printf("%s\n", dirp->d_name);
	}

	closedir(dp);

	return EXIT_SUCCESS;
}	
