#define STRUCTURES
typedef struct message
{
	char sender[10];
	char receiver[10];
	int command;
	void * data;
}message;
