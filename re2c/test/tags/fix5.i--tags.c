/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *YYCTXMARKER, *p1, *p2, *p3, *p4;
    
{
	char yych;
	long yyt0p2;
	long yyt0p4;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	case '1':	goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':	goto yy7;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '2':
		yyt0p2 = (YYCURSOR - YYCTXMARKER);
		goto yy10;
	case '3':
		yyt0p2 = (YYCURSOR - YYCTXMARKER);
		goto yy12;
	default:	goto yy3;
	}
yy6:
	++YYCURSOR;
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case '0':	goto yy6;
	case '1':	goto yy9;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy3;
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':
		yyt0p2 = (YYCURSOR - YYCTXMARKER);
		goto yy10;
	case '3':
		yyt0p2 = (YYCURSOR - YYCTXMARKER);
		goto yy12;
	default:	goto yy8;
	}
yy10:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '2':	goto yy10;
	case '3':	goto yy12;
	default:	goto yy8;
	}
yy12:
	++YYCURSOR;
	yyt0p4 = (YYCURSOR - YYCTXMARKER);
	yych = *YYCURSOR;
	goto yy15;
yy13:
	p4 = YYCTXMARKER + yyt0p4;
	p3 = YYCTXMARKER + (yyt0p4 - 1);
	p2 = YYCTXMARKER + yyt0p2;
	p1 = YYCTXMARKER + (yyt0p2 - 1);
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                p1 - YYCTXMARKER, YYCTXMARKER,
                p2 - p1, p1,
                p3 - p2, p2,
                p4 - p3, p3,
                YYCURSOR - p4, p4);
                return;
        }
yy14:
	++YYCURSOR;
	yych = *YYCURSOR;
yy15:
	switch (yych) {
	case '4':	goto yy14;
	default:	goto yy13;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}