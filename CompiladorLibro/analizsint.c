//analsint

#include "global.h"

int preanalisis;

void analsint() {

	preanalisis = analex();
	while (preanalisis != FIN) {
		expr();
		parea(';');
	}
}

int expr() {
	int t;
	termino();
	while (1)
		switch (preanalisis) {
		case '+': case '-':
			t = preanalisis;
			parea(preanalisis);
			termino();
			emite(t, NINGUNO);
			continue;
		default:
			return;
		}
}

int termino() {
	int t;
	factor();
	while (1)
		switch (preanalisis) {
		case '*': case '/': case DIV: case MOD:
			t = preanalisis;
			parea(preanalisis);
			factor();
			emite(t, NINGUNO);
			continue;
		default:
			return;
		}
}

int factor() {
	switch (preanalisis) {
	case '(':
		parea('(');
		expr();
		parea(')');
		break;
	case NUM:
		emite(NUM, valcomplex);
		parea(NUM);
		break;
	case ID:
		emite(ID, valcomplex);
		parea(ID);
		break;
	default:
		error("Error de sintaxis");
	}
}
int parea(t)
int t;
{
	if (preanalisis == t) {
		preanalisis = analex();
	}
	else {
		error("Error de sintanxis");
	}
}
