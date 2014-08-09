#ifndef _OPCODE_H_
#define _OPCODE_H_
enum op{ PUSHGLOBAL, PUSHLOCAL, PUSHREAL, STOREGLOBAL, STORELOCAL, PUSHSTRING, OP_DIV, OP_ADD, OP_MUL, OP_SUB, OP_AND,
	OP_OR, OP_NOT, OP_EQ, OP_NOTEQ, OP_LT, OP_GT, OP_LE, OP_GE, JMP, JMPIFF, RET0, RETCODE, CALLFUNC, PRINTFUNC,
	ADJUST, SETATTR, GETATTR, SETLINE, SETINDEX, GETINDEX, PUSHTRUE, PUSHFALSE
};

#endif