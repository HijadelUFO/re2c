/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy5;
	case 'c':	goto yy6;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy8;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt2 = yyt1;
		yyt1 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy14;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy15;
	case 'c':	goto yy16;
	default:	goto yy4;
	}
yy8:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt1 = yyt5;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy18;
	default:	goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':	goto yy17;
	default:	goto yy4;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy20;
	default:	goto yy4;
	}
yy11:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	switch (yych) {
	case 'c':	goto yy21;
	default:	goto yy4;
	}
yy12:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy22;
	case 'c':	goto yy16;
	case 'd':	goto yy23;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy14:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy15:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt5 = yyt1;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt1;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy24;
	default:	goto yy4;
	}
yy16:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy17:
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy16;
	case 'd':	goto yy23;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':	goto yy17;
	case 'd':	goto yy25;
	default:	goto yy4;
	}
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy26;
	default:	goto yy4;
	}
yy20:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy25;
	default:	goto yy4;
	}
yy22:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt5 = yyt2;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy24;
	case 'd':	goto yy23;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy23:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy27;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy24:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy16;
	case 'd':	goto yy29;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy25:
	yych = *++YYCURSOR;
	yyt5 = yyt3;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy16;
	default:	goto yy4;
	}
yy26:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy29;
	default:	goto yy4;
	}
yy27:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy27;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
yy29:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = yyt4;
	yyt5 = yyt3;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy19;
	case 'c':	goto yy16;
	case 'd':	goto yy23;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy14;
	}
}

posix_captures/repetition/83.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]