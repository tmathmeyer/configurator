/*

Author: Ted Meyer

This software is licensed under the The Happy Fun Ball License

*/

#include "flags/flags.h"

#include <stdio.h>




int main(int argc, char** argv)
{

	char* arg_flags[] = {"o", "t"};
	set_flags_with_args(arg_flags, 2);

	parse_flags(argv+1, argc-1);
	


	char* flag = get_flag("o");
	if (flag == 0)
	{
		puts("not passed");
	}
	else if (flag == (char*)1)
	{
		puts("flag triggered");
	}
	else
	{
		printf("flag value: %s\n", flag);
	}

	return 0;

}