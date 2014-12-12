
// Boron language interepreter.

#include "iar.h"

// starting point of the program.

// here we initialize the lexer module, which pushes to a queue in a producer-consumer relationship with the rest of the program.
// we also initialize the parser module, which builds the abstract syntax tree to a full statement, and sends that to the evaluator module.
int main() {
	iar_lex(); // "init and run" lex
}

void parse() {

}
