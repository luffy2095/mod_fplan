#include <iostream>
#include <stdio.h>
#include <queue>
#include <pthread.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
//#include "globals.h"
#include "mailBox.h"
using namespace std;

void send_message(char * receiver, message *msg)
{
	message *temp = msg;
	if(!strcmp("OBC" , receiver))
		{
			OBC.push(temp);
		}
}
