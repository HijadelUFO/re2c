/* Generated by re2c */

#include <stdio.h>
#include <stdlib.h> /* malloc, free */

static void *read_file
    ( const char *fname
    , size_t unit
    , size_t padding
    , size_t *pfsize
    )
{
    void *buffer = NULL;
    size_t fsize = 0;

    /* open file */
    FILE *f = fopen(fname, "rb");
    if(f == NULL) {
        goto error;
    }

    /* get file size */
    fseek(f, 0, SEEK_END);
    fsize = (size_t) ftell(f) / unit;
    fseek(f, 0, SEEK_SET);

    /* allocate memory for file and padding */
    buffer = malloc(unit * (fsize + padding));
    if (buffer == NULL) {
        goto error;
    }

    /* read the whole file in memory */
    if (fread(buffer, unit, fsize, f) != fsize) {
        goto error;
    }

    fclose(f);
    *pfsize = fsize;
    return buffer;

error:
    fprintf(stderr, "error: cannot read file '%s'\n", fname);
    free(buffer);
    if (f != NULL) {
        fclose(f);
    }
    return NULL;
}

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYBACKUPCTX() ctxmarker = cursor
#define YYRESTORECTX() cursor = ctxmarker
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line63
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line63: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line63: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line63()
{
    const size_t padding = 3; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("ctx.S.c.line63.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("ctx.S.c.line63.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        const YYCTYPE *ctxmarker = NULL;
        YYCTYPE yych;

        if (YYLESSTHAN (3)) YYFILL(3);
        yych = YYPEEK ();
        switch (yych) {
        case '\t':
        case ' ':    goto yy6;
        case '\n':    goto yy8;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy4;
        case 'a':
        case 'b':    goto yy2;
        default:    goto yy9;
        }
yy2:
        YYSKIP ();
        YYBACKUPCTX ();
        switch ((yych = YYPEEK ())) {
        case '0':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy12;
        case '1':    goto yy15;
        default:    goto yy3;
        }
yy3:
        status = action_line63(i, keys, input, token, &cursor, 4);
        continue;
yy4:
        YYSKIP ();
        yych = YYPEEK ();
        goto yy11;
yy5:
        status = action_line63(i, keys, input, token, &cursor, 2);
        continue;
yy6:
        YYSKIP ();
yy7:
        status = action_line63(i, keys, input, token, &cursor, 3);
        continue;
yy8:
        YYSKIP ();
        yych = YYPEEK ();
        goto yy7;
yy9:
        YYSKIP ();
        yych = YYPEEK ();
        goto yy3;
yy10:
        YYSKIP ();
        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
yy11:
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy10;
        default:    goto yy5;
        }
yy12:
        YYSKIP ();
        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy12;
        default:    goto yy14;
        }
yy14:
        YYRESTORECTX ();
        status = action_line63(i, keys, input, token, &cursor, 1);
        continue;
yy15:
        YYSKIP ();
        switch ((yych = YYPEEK ())) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy12;
        default:    goto yy16;
        }
yy16:
        YYRESTORECTX ();
        status = action_line63(i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line63: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line63: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYBACKUPCTX
#undef YYRESTORECTX
#undef YYLESSTHAN
#undef YYFILL
#define YYMAXFILL 3

int main()
{
    if(lex_line63() != 0) {
        return 1;
    }
    return 0;
}
a00 b21a32b43a54b65a76b87a98b09	a20
b31a42b53a64b75a86b97a08b29a30b41a52b63a74b85a96b07a28b39a40b51a62 b73!a84"b95#a06$b27%a38&b49'a50(b61)a72*b83+a94,b05-a26.b37/a48:b59;a60<b71=a82>b93?a04@b25Aa36Bb47Ca58Db69Ea70Fb81Ga92Hb03Ia24Jb35Ka46Lb57Ma68Nb79Oa80Pb91Qa02Rb23Sa34Tb45Ua56Vb67Wa78Xb89Ya90Zb01[a22\b33]a44^b55_a66`b77aa88bb99ca00db21ea32fb43ga54hb65ia76jb87ka98lb09ma20nb31oa42pb53qa64rb75sa86tb97ua08vb29wa30xb41ya52zb63{a74|b85}a96~b07a28�b39�a40�b51�a62�b73�a84�b95�a06�b27�a38�b49�a50�b61�a72�b83�a94�b05�a26�b37�a48�b59�a60�b71�a82�b93�a04�b25�a36�b47�a58�b69�a70�b81�a92�b03�a24�b35�a46�b57�a68�b79�a80�b91�a02�b23�a34�b45�a56�b67�a78�b89�a90�b01�a22�b33�a44�b55�a66�b77�a88�b99�a00�b21�a32�b43�a54�b65�a76�b87�a98�b09�a20�b31�a42�b53�a64�b75�a86�b97�a08�b29�a30�b41�a52�b63�a74�b85�a96�b07�a28�b39�a40�b51�a62�b73�a84�b95�a06�b27�a38�b49�a50�b61�a72�b83�a94�b05�a26�b37�a48�b59�a60�b71�a82�b93�a04�b25�a36�b47�a58�b69�a70�b81�a92�b03�a24�b35�a0 b2a3b4a5b6a7b8a9b0	a2
b3a4b5a6b7a8b9a0b2a3b4a5b6a7b8a9b0a2b3a4b5a6 b7!a8"b9#a0$b2%a3&b4'a5(b6)a7*b8+a9,b0-a2.b3/a4:b5;a6<b7=a8>b9?a0@b2Aa3Bb4Ca5Db6Ea7Fb8Ga9Hb0Ia2Jb3Ka4Lb5Ma6Nb7Oa8Pb9Qa0Rb2Sa3Tb4Ua5Vb6Wa7Xb8Ya9Zb0[a2\b3]a4^b5_a6`b7aa8bb9ca0db2ea3fb4ga5hb6ia7jb8ka9lb0ma2nb3oa4pb5qa6rb7sa8tb9ua0vb2wa3xb4ya5zb6{a7|b8}a9~b0a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a10 b11 a12 b13 a14 b15 a16 b17 a18 b19 a1 b1a1b1a1b1a1b1a1b1	a1
b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1 b1!a1"b1#a1$b1%a1&b1'a1(b1)a1*b1+a1,b1-a1.b1/a1:b1;a1<b1=a1>b1?a1@b1Aa1Bb1Ca1Db1Ea1Fb1Ga1Hb1Ia1Jb1Ka1Lb1Ma1Nb1Oa1Pb1Qa1Rb1Sa1Tb1Ua1Vb1Wa1Xb1Ya1Zb1[a1\b1]a1^b1_a1`b1aa1bb1ca1db1ea1fb1ga1hb1ia1jb1ka1lb1ma1nb1oa1pb1qa1rb1sa1tb1ua1vb1wa1xb1ya1zb1{a1|b1}a1~b1a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a babababab	a
bababababababababababa b!a"b#a$b%a&b'a(b)a*b+a,b-a.b/a:b;a<b=a>b?a@bAaBbCaDbEaFbGaHbIaJbKaLbMaNbOaPbQaRbSaTbUaVbWaXbYaZb[a\b]a^b_a`baabbcadbeafbgahbiajbkalbmanboapbqarbsatbuavbwaxbyazb{a|b}a~ba�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�000 111222333444555666777888999	000
111222333444555666777888999000111222333444555666777888999000111222 333!444"555#666$777%888&999'000(111)222*333+444,555-666.777/888:999;000<111=222>333?444@555A666B777C888D999E000F111G222H333I444J555K666L777M888N999O000P111Q222R333S444T555U666V777W888X999Y000Z111[222\333]444^555_666`777a888b999c000d111e222f333g444h555i666j777k888l999m000n111o222p333q444r555s666t777u888v999w000x111y222z333{444|555}666~777888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�666�777�888�999�000�111�222�333�444�555�00 112233445566778899	00
11223344556677889900112233445566778899001122 33!44"55#66$77%88&99'00(11)22*33+44,55-66.77/88:99;00<11=22>33?44@55A66B77C88D99E00F11G22H33I44J55K66L77M88N99O00P11Q22R33S44T55U66V77W88X99Y00Z11[22\33]44^55_66`77a88b99c00d11e22f33g44h55i66j77k88l99m00n11o22p33q44r55s66t77u88v99w00x11y22z33{44|55}66~7788�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�0 123456789	0
1234567890123456789012 3!4"5#6$7%8&9'0(1)2*3+4,5-6.7/8:9;0<1=2>3?4@5A6B7C8D9E0F1G2H3I4J5K6L7M8N9O0P1Q2R3S4T5U6V7W8X9Y0Z1[2\3]4^5_6`7a8b9c0d1e2f3g4h5i6j7k8l9m0n1o2p3q4r5s6t7u8v9w0x1y2z3{4|5}6~78�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�	 
 !"#$%&'()*+,-./:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`cdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������                                                                                                                                                                                                                                                      