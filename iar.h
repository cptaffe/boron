
// "init and run" helper functions
// these functions initialize each piece, and start a thread.

#include <stdlib.h>
#include <pthread.h>
#include "lex.h" // lex module

typedef struct {
	void *data; // pointer to data for each module
	pthread_t thread; // thread
} iar_mod;

// init and run functions

// init and run lex
iar_mod *iar_lex() {
	iar_mod *mod = malloc(sizeof(iar_mod));
	mod->data = lex_init();
	int stat = pthread_create(&mod->thread);
}
