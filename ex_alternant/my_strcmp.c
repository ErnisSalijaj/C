int my_strcmp(const char *s1, const char *s2)
{
    int iter = 0;
    
    while ((s1[iter] == s2[iter]) && (s1[iter] != '\0') && (s2[iter] != '\0'))
        iter++;
    return (s1[iter] - s2[iter]);
}
