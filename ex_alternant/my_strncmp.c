int my_strncmp(const char *s1, const char *s2, int n)
{
    while ((*s1 == *s2) && (*s1 != '\0') && (n > 0)){
        s1++;
        s2++;
        n--;
    }
    return (n == 0) ? 0 : (*s1 - *s2);
}
