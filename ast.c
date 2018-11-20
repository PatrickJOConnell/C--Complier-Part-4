/*
Patrick O'Connell
CS 473 Part 4
oconne16
667792610
*/



#include "symbolTable.h"
#include "ast.h"


extern SymbolTableStackEntryPtr symbolStackTop;

extern int scopeDepth;

AstNodePtr  new_ExprNode(ExpKind kind) {		// creates a new expression node
	int i = 0;
	AstNodePtr return_ANP = malloc(sizeof(AstNode));
	return_ANP->nKind = EXPRESSION;
	//return_ANP->sKind = EXPRESSION;
	return_ANP->eKind = kind;
	for (i = 0; i < MAXCHILDREN; ++i) {
		return_ANP->children[i] = NULL;
	}
	return_ANP->sibling = NULL;
	return_ANP->nType = NULL;
	return_ANP->nSymbolPtr = NULL;
	return_ANP->nValue = 0;
	return_ANP->nSymbolTabPtr = NULL;
	return_ANP->fname = NULL;
	int nLinenumber = -1;
	return return_ANP;
}


AstNodePtr new_StmtNode(StmtKind kind){			// creates a new statement node

int i = 0;	
AstNodePtr return_ANP = malloc(sizeof(AstNode));
	return_ANP->nKind = STMT;
	return_ANP->sKind = kind;
	//return_ANP->eKind = kind;
	for (i = 0; i < MAXCHILDREN; ++i) {
		return_ANP->children[i] = NULL;
	}
	return_ANP->sibling = NULL;
	return_ANP->nType = NULL;
	return_ANP->nSymbolPtr = NULL;
	return_ANP->nValue = 0;
	return_ANP->nSymbolTabPtr = NULL;
	return_ANP->fname = NULL;
	int nLinenumber = -1;
	return return_ANP;
}

Type* new_type(TypeKind kind){				// creates a new type node for entry into symbol table
	Type *return_type = malloc(sizeof(Type));	
	return_type->kind = kind;			/* set kind to the kind provided */
	return_type->dimension = 0;			/* for arrays */
	return_type->function = NULL;			/* function argument and return types */
	return return_type;
}







