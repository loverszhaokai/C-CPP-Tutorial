#include <stdio.h>
#include <stdlib.h>


void print_env(char *env_name)
{
	printf("%s\t= %s\n", env_name, getenv(env_name));
}




int main()
{
	printf("\n======Linux environment variables======\n\n");


	print_env("COMPUTE");
	print_env("DISPLAY");
	print_env("GWS");
	print_env("JOHN_NO_OMP_FALLBACK");
	print_env("LC_ALL");
	print_env("LC_CTYPE");
	print_env("LC_MESSAGES");
	print_env("LWS");
	print_env("OPENCLBUILDOPTIONS");
	print_env("OMPI_COMM_WORLD_SIZE");
	print_env("OMP_NUM_THREADS");
	print_env("OMP_SCALE");
	print_env("STEP");
	print_env("_TYPE");

	print_env("sha512crypt_BuildOpts");
	print_env("wpapsk_BuildOpts");
	print_env("sha256_BuildOpts");

	// print_env("LWS");   ./src/jumbo.c:337:str = getenv(name);

	return 0;
}
