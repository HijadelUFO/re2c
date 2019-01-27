#ifndef _RE2C_LIB_REGEX_
#define _RE2C_LIB_REGEX_

#include <stddef.h>
#include <limits.h>


// fwd
namespace re2c {

struct nfa_t;
struct dfa_t;
struct RangeMgr;

} // namespace re2c

typedef ptrdiff_t regoff_t;

struct regmatch_t
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct regex_t
{
    size_t re_nsub;
    re2c::RangeMgr *rmgr;
    const re2c::nfa_t *nfa;
    const re2c::dfa_t *dfa;
    regmatch_t *pmatch;
    regoff_t *regs;
    size_t *char2class;
};

static const int REG_NOMATCH = INT_MAX;

int regcomp(regex_t *preg, const char *pattern, int cflags);

size_t regerror(int errcode, const regex_t *preg, char *errbuf, size_t errbuf_size);

int regexec(const regex_t *preg, const char *string, size_t nmatch, regmatch_t pmatch[], int eflags);

void regfree(regex_t *preg);

#endif // _RE2C_LIB_REGEX_