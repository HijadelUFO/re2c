/* Generated by re2c */




{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	{
		static void *yytarget[256] = {
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy3,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy6,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy8,  &&yy10, &&yy12, &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4
		};
		goto *yytarget[yych];
	}
yy3:
yy4:
	++YYCURSOR;
	{ return "SETUP - r1"; }
	{ return "."; }
yy6:
	++YYCURSOR;
	{ return "SETUP - r1"; }
	{ return "1"; }
yy8:
	++YYCURSOR;
	{ return "SETUP - r1"; }
	{ return "a"; }
yy10:
	++YYCURSOR;
	{ return "SETUP - r1"; }
	{ return "b"; }
yy12:
	++YYCURSOR;
	{ return "SETUP - r1"; }
	{ return "c"; }
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '`') {
		if (yych != '\n') goto yy17;
	} else {
		if (yych <= 'a') goto yy19;
		if (yych == 'c') goto yy21;
		goto yy17;
	}
yy17:
	++YYCURSOR;
	{ return "."; }
yy19:
	++YYCURSOR;
	{ return "a"; }
yy21:
	++YYCURSOR;
	{ return "c"; }
}



{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	{
		static void *yytarget[256] = {
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy3,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy6,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy8,  &&yy10, &&yy12, &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,
			&&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4,  &&yy4
		};
		goto *yytarget[yych];
	}
yy3:
yy4:
	++YYCURSOR;
	{ return "."; }
yy6:
	++YYCURSOR;
	{ return "2"; }
yy8:
	++YYCURSOR;
	{ return "a"; }
yy10:
	++YYCURSOR;
	{ return "b"; }
yy12:
	++YYCURSOR;
	{ return "c"; }
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '`') {
		if (yych != '\n') goto yy17;
	} else {
		if (yych <= 'a') goto yy19;
		if (yych == 'c') goto yy21;
		goto yy17;
	}
yy17:
	++YYCURSOR;
	{ return "SETUP - r2"; }
	{ return "."; }
yy19:
	++YYCURSOR;
	{ return "SETUP - r2"; }
	{ return "a"; }
yy21:
	++YYCURSOR;
	{ return "SETUP - r2"; }
	{ return "c"; }
}

reuse/reuse_conds_setup_0.cgir.re:12:2: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/reuse_conds_setup_0.cgir.re:12:2: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/reuse_conds_setup_0.cgir.re:17:2: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/reuse_conds_setup_0.cgir.re:17:2: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/reuse_conds_setup_0.cgir.re:12:2: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
reuse/reuse_conds_setup_0.cgir.re:17:2: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]