int	ft_strlen(char *str)
{
	char	*string;
	int		counter;

	string = str;
	counter = 0;
	while (*string != '\0')
	{
		counter++;
		string++;
	}
	return (counter);
}
