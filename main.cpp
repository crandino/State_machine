#include <stdio.h>

enum states
{
	IDLE,
	WALK_RIGHT,

	EXIT
};

enum ext_inputs
{
	RIGHT_KEY,
	LEFT_KEY
};

int main(int argc, char **argv)
{
	states state = IDLE;
	char input;

	while (state != EXIT)
	{
		input = getchar();
		switch (state)
		{
		case(IDLE) :
			if (input == 'd')
				state = WALK_RIGHT;
			break;
		case(WALK_RIGHT) :
			if (input == 'a')
				state = IDLE;
			break;
		default:
			state = IDLE;
		}
	}

	return 0;
}