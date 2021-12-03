
int	ft_strl_longuest_word(char const *s, char c)
{
	unsigned int count;
	unsigned int i;
	unsigned int lw;

	lw = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count = 0;
		if (s[i] != c)
		{
			while (s[i] != c)
			{
				count++;
				i++;
			}
		}
		if (lw < count)
			lw = count;
		i++;
	}
	return (lw);
}
