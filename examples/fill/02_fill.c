/* Generated by re2c */
#line 1 "fill/02_fill.re"
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 1

#define SIZE 4096

typedef struct {
    FILE *file;
    char buf[SIZE + YYMAXFILL], *lim, *cur, *mar, *tok;
    int eof;
} Input;

static int fill(Input *in, size_t need)
{
    if (in->eof) {
        return 1;
    }
    const size_t free = in->tok - in->buf;
    if (free < need) {
        return 2;
    }
    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    in->lim += fread(in->lim, 1, free, in->file);
    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }
    return 0;
}

static void init(Input *in, FILE *file)
{
    in->file = file;
    in->cur = in->mar = in->tok = in->lim = in->buf + SIZE;
    in->eof = 0;
    fill(in, 1);
}

#define YYFILL(n) if (fill(in, n) != 0) return -1
static int lex(Input *in)
{
    int count = 0;
loop:
    in->tok = in->cur;
    
#line 55 "fill/02_fill.c"
{
	char yych;
	if (in->lim <= in->cur) YYFILL(1);
	yych = *in->cur;
	switch (yych) {
	case 0x00:	goto yy2;
	case ' ':	goto yy6;
	case '\'':	goto yy9;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy11;
	default:	goto yy4;
	}
yy2:
	++in->cur;
#line 57 "fill/02_fill.re"
	{ return (YYMAXFILL == in->lim - in->tok) ? count : -1; }
#line 96 "fill/02_fill.c"
yy4:
	++in->cur;
#line 56 "fill/02_fill.re"
	{ return -1; }
#line 101 "fill/02_fill.c"
yy6:
	++in->cur;
	if (in->lim <= in->cur) YYFILL(1);
	yych = *in->cur;
	switch (yych) {
	case ' ':	goto yy6;
	default:	goto yy8;
	}
yy8:
#line 60 "fill/02_fill.re"
	{ goto loop; }
#line 113 "fill/02_fill.c"
yy9:
	++in->cur;
	if (in->lim <= in->cur) YYFILL(1);
	yych = *in->cur;
	switch (yych) {
	case '\'':	goto yy14;
	case '\\':	goto yy16;
	default:	goto yy9;
	}
yy11:
	++in->cur;
	if (in->lim <= in->cur) YYFILL(1);
	yych = *in->cur;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy11;
	default:	goto yy13;
	}
yy13:
#line 58 "fill/02_fill.re"
	{ ++count; goto loop; }
#line 159 "fill/02_fill.c"
yy14:
	++in->cur;
#line 59 "fill/02_fill.re"
	{ ++count; goto loop; }
#line 164 "fill/02_fill.c"
yy16:
	++in->cur;
	if (in->lim <= in->cur) YYFILL(1);
	yych = *in->cur;
	goto yy9;
}
#line 62 "fill/02_fill.re"

}

int main()
{
    FILE *f = fopen("input.txt", "rb");
    if (!f) return 1;

    Input in;
    init(&in, f);
    printf("count: %d\n", lex(&in));

    fclose(f);
    return 0;
}