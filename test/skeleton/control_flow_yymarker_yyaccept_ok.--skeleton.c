/* Generated by re2c */

#include <stddef.h> /* size_t */
#include <stdio.h>
#include <stdlib.h> /* malloc, free */
#include <string.h> /* memcpy */

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
    if (f == NULL) {
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
#define YYBACKUP() marker = cursor
#define YYRESTORE() cursor = marker
#define YYSHIFT(o) cursor += o
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line7
    ( unsigned *pkix
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const unsigned kix = *pkix;
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys[kix + 1];
    const YYKEYTYPE rule_exp = keys[kix + 2];
    *pkix = kix + 3;
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line7: control flow is undefined"
                " for input at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[kix];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line7: at position %ld (key %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , kix
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

static int check_key_count_line7(unsigned have, unsigned used, unsigned need)
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line7: not enough keys\n");
    return 1;
}

int lex_line7()
{
    const size_t padding = 6; /* YYMAXFILL */
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
        ( "skeleton/control_flow_yymarker_yyaccept_ok.--skeleton.c.line7.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ( "skeleton/control_flow_yymarker_yyaccept_ok.--skeleton.c.line7.keys"
        , sizeof (YYKEYTYPE)
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

    for (i = 0; status == 0 && cursor < eof && i < keys_count;) {
        token = cursor;
        const YYCTYPE *marker = NULL;
        YYCTYPE yych;
        unsigned int yyaccept = 0;

        if (YYLESSTHAN (6)) YYFILL(6);
        yych = YYPEEK ();
        YYSKIP ();
        yych = YYPEEK ();
        yyaccept = 0;
        YYSKIP ();
        YYBACKUP ();
        yych = YYPEEK ();
        goto yy5;
yy4:
        status = check_key_count_line7(keys_count, i, 3)
             || action_line7(&i, keys, input, token, &cursor, 2);
        continue;
yy5:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'a':    goto yy7;
        default:    goto yy6;
        }
yy6:
        YYSKIP ();
        yych = YYPEEK ();
        goto yy9;
yy7:
        yyaccept = 1;
        YYSKIP ();
        YYBACKUP ();
        yych = YYPEEK ();
        goto yy9;
yy8:
        status = check_key_count_line7(keys_count, i, 3)
             || action_line7(&i, keys, input, token, &cursor, 1);
        continue;
yy9:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'a':    goto yy11;
        default:    goto yy10;
        }
yy10:
        YYRESTORE ();
        if (yyaccept == 0) {
            goto yy4;
        } else {
            goto yy8;
        }
yy11:
        YYSKIP ();
        status = check_key_count_line7(keys_count, i, 3)
             || action_line7(&i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line7: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line7: unused keys left after %u keys\n", i);
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
#undef YYBACKUP
#undef YYRESTORE
#undef YYLESSTHAN
#undef YYFILL

int main()
{
    if (lex_line7() != 0) {
        return 1;
    }
    return 0;
}
     aaaaaaaaa					a




aaaaaaaaaaaaaaaaaaaaaa     a!!!!!a"""""a#####a$$$$$a%%%%%a&&&&&a'''''a(((((a)))))a*****a+++++a,,,,,a-----a.....a/////a00000a11111a22222a33333a44444a55555a66666a77777a88888a99999a:::::a;;;;;a<<<<<a=====a>>>>>a?????a@@@@@aAAAAAaBBBBBaCCCCCaDDDDDaEEEEEaFFFFFaGGGGGaHHHHHaIIIIIaJJJJJaKKKKKaLLLLLaMMMMMaNNNNNaOOOOOaPPPPPaQQQQQaRRRRRaSSSSSaTTTTTaUUUUUaVVVVVaWWWWWaXXXXXaYYYYYaZZZZZa[[[[[a\\\\\a]]]]]a^^^^^a_____a`````aaaabaabbbcbacccdcadddedaeeefeafffgfaggghgahhhihaiiijiajjjkjakkklkalllmlammmnmannnonaooopoapppqpaqqqrqarrrsrassstsatttutauuuvuavvvwvawwwxwaxxxyxayyyzyazzz{za{{{|{a|||}|a}}}~}a~~~~a�a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a�����a��� �a      						





      !!!!!!""""""######$$$$$$%%%%%%&&&&&&''''''(((((())))))******++++++,,,,,,------......//////000000111111222222333333444444555555666666777777888888999999::::::;;;;;;<<<<<<======>>>>>>??????@@@@@@AAAAAABBBBBBCCCCCCDDDDDDEEEEEEFFFFFFGGGGGGHHHHHHIIIIIIJJJJJJKKKKKKLLLLLLMMMMMMNNNNNNOOOOOOPPPPPPQQQQQQRRRRRRSSSSSSTTTTTTUUUUUUVVVVVVWWWWWWXXXXXXYYYYYYZZZZZZ[[[[[[\\\\\\]]]]]]^^^^^^______``````aaababbbbcbccccdcddddedeeeefeffffgfgggghghhhhihiiiijijjjjkjkkkklkllllmlmmmmnmnnnnonoooopoppppqpqqqqrqrrrrsrsssststtttutuuuuvuvvvvwvwwwwxwxxxxyxyyyyzyzzzz{z{{{{|{||||}|}}}}~}~~~~~����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� �    a aaaaaaaaaaaaaaaaa			a	a


a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa   a a!!!a!a"""a"a###a#a$$$a$a%%%a%a&&&a&a'''a'a(((a(a)))a)a***a*a+++a+a,,,a,a---a-a...a.a///a/a000a0a111a1a222a2a333a3a444a4a555a5a666a6a777a7a888a8a999a9a:::a:a;;;a;a<<<a<a===a=a>>>a>a???a?a@@@a@aAAAaAaBBBaBaCCCaCaDDDaDaEEEaEaFFFaFaGGGaGaHHHaHaIIIaIaJJJaJaKKKaKaLLLaLaMMMaMaNNNaNaOOOaOaPPPaPaQQQaQaRRRaRaSSSaSaTTTaTaUUUaUaVVVaVaWWWaWaXXXaXaYYYaYaZZZaZa[[[a[a\\\a\a]]]a]a^^^a^a___a_a```a`aaaaaaabbbabacccacadddadaeeeaeafffafagggagahhhahaiiiaiajjjajakkkakalllalammmamannnanaoooaoapppapaqqqaqarrrarasssasatttatauuuauavvvavawwwawaxxxaxayyyayazzzaza{{{a{a|||a|a}}}a}a~~~a~aaa���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a���a�a                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                