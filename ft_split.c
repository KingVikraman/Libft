/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:40:07 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/08 12:40:09 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

    static int	ft_count_words(char const *str, char c)
    {
	    int	i;
	    int	count;

	    i = 0;
	    count = 0;
	    while (str[i] != '\0')
	    {
		    if (str[i] == c)
			    i++;
		    else
		    {
			    count++;
			    while (str[i] && str[i] != c)
				    i++;
		    }
	    }
	    return (count);
    }

            static char	*ft_putword(char *word, char const *s, int i, int word_len)
            {
	            int	j;

	            j = 0;
	            while (word_len > 0)
	            {
		            word[j] = s[i - word_len];
		            j++;
		            word_len--;
	            }
	            word[j] = '\0';
	            return (word);
            }

    static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
    {   
	    int	i;
	    int	word;
	    int	word_len;

	    i = 0;
	    word = 0;
	    word_len = 0;
	    while (word < num_words)
	    {
		    while (s[i] && s[i] == c)
			    i++;
		    while (s[i] && s[i] != c)
		    {
			    i++;
			    word_len++;
		    }
		    s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		    if (!s2)
			    return (free_array(s2, word));
		    ft_putword(s2[word], s, i, word_len);
		    word_len = 0;
		    word++;
	    }
	    s2[word] = 0;
        return (s2);
    }

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_words);
	return (s2);
}
int main()
 {
    char const *s = "Hello World! This is a test string.";
    char c = ' ';
    char **words = ft_split(s, c);

    if (words) {
        // Print each word
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
        }

        // Free the memory allocated for the array of words
        free_array(words, ft_count_words(s, c));
    } else {
        printf("Failed to split the string.\n");
    }

    return 0;
}
