/* Generated by re2c */
// re2c:define:YYGETCONDITION:naked = 0;
// re2c:decorate = 0;

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc1:
		goto yyc_c1;
	case yycc2:
		goto yyc_c2;
	}
/* *********************************** */
yyc_c1:
	if (YYLIMIT <= YYCURSOR) YYFILL
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{ x }
yy5:
	++YYCURSOR;
	YYSETCONDITION
	{ a }
/* *********************************** */
yyc_c2:
	if (YYLIMIT <= YYCURSOR) YYFILL
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy11;
	default:	goto yy9;
	}
yy9:
	++YYCURSOR;
	{ x }
yy11:
	++YYCURSOR;
	YYSETCONDITION
	{ b }
}
