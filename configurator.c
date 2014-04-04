
#include "flags.h"

#include <stdio.h>




int main(int argc, char** argv)
{

	char* arg_flags[] = {"o", "t"};
	set_flags_with_args(arg_flags, 2);

	parse_flags(argv+1, argc-1);
	//printflags();

	struct paramlist* p = get_real_params();
	int c = 0;
	for(;c<p->count; c++)
	{
		printf("%s\n", *((p->params)+c));
	}

	return 0;
}