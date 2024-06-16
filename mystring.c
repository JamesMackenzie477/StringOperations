#include <stdlib.h> //included for malloc (might be used in mystrdup

int mystrlen(const char* s) {
    int i;
	for (i = 0; s[i] != NULL; i++);
	return i;
}

int mystrncmp(const char *s1, const char *s2, int n) {
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
    }
    return 0;
}

int mystrcmp(const char *s1, const char *s2) {
	return mystrncmp(s1, s2, strlen(s1));
}

char *mystrncpy(char *dst, const char *src, int n){
	for (int i = 0; i < n; i++)
    {
        dst[i] = src[i];
    }
    dst[n] = NULL;
    return dst;
}

char *mystrcpy(char *dst, const char *src){
	return mystrncpy(dst, src, strlen(src));
}


char *mystrdup(const char *src) {
    char * str = (char *)malloc(strlen(src) + 1);
    mystrcpy(str, src);
}
