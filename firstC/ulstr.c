int icheck(char c)
{
    char index;

if (c >= 'A' && c <= 'Z')
    {
index = c + 32;
return (index);
    }
    if (c >= 'a' && c <= 'z')
    {
index = c - 32;
return (index);
    }
    else
index = c;
    return (index);
}

int main(int argc, char **argv)
{
    char index;
    int i;

i = 0;
    if (argc != 2)
    {
write(1, "\n", 1);
return (0);
    }
    while (argv[1][i] != '\0')
    {
index = icheck(argv[1][i]);
write(1, &index, 1);
i++;
    }
    write(1, "\n", 1);
    return (0);
}
