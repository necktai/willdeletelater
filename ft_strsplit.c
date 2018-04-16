/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 21:58:57 by ntai              #+#    #+#             */
/*   Updated: 2018/04/14 23:20:47 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** GOAL: Given a string and a character,
** returns back an array of strings.
**
** The given string usually would have
** multiple words seperated by c.
** The goal is to split up each of those
** words and put them in an array.
*/

/*
** GOAL:
** Goes through a string and
** skips delims, counts word, and then
** skips the word till next delim.
**
** NOTE: the null terms are needed
** for cases such as "    olol"
*/

static	size_t	ft_word_count(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		if (*s != c && *s != '\0')
		{
			++word_count;
			while (*s != c && *s != '\0')
				++s;
		}
	}
	return (word_count);
}

/*
** GOAL:
** Return back the first word that the
** pointer gives us.
**
** NOTE: In strsplit, I will call this
** function but based on different pointer
** locations. I will input a pointer location
** to the next word.
**
** 1. count string length till we hit
** null or delim
** 2. malloc based on string length
** 3. set each character of new string
** to be the first word. Aka till we hit
** delim or null.
** 4. add null term
**
** NOTE: I have 2 place_holders.
** First one is to hold original string's
** first index.
** Second one is to hold new string's
** first index.
** I already traversed through s, so I
** need placehold to retraverse when
** I set the new string.
** placehold_2 is just to return back
** the first location of the new string
*/

static	char	*ft_return_word(char const *s, char c)
{
	char	*str;
	size_t	str_length;
	char	*place_hold;
	char	*place_hold2;

	str_length = 0;
	place_hold = (char *)s;
	while (*s && *s != c)
	{
		++str_length;
		++s;
	}
	str = (char *)malloc(sizeof(char) * str_length + 1);
	if (str == NULL)
		return (NULL);
	place_hold2 = str;
	while (*place_hold && *place_hold != c)
		*str++ = *place_hold++;
	*str = '\0';
	return (place_hold2);
}

/*
** we use break to get to the next word but
** not any further.
*/

static	char	*ft_skip_delim(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			++s;
		else
			break ;
	}
	return ((char *)s);
}

static	char	*ft_skip_word(char const *s, char c)
{
	while (*s)
	{
		if (*s != c)
			++s;
		else
			break ;
	}
	return ((char *)s);
}

/*
** 1. mallocs 2d array based on # of words
** 2. set each "slot" in the 2d array to each word
** 3. ft_skip_delim/word is to repoint, after
** we set each word, to the next word.
**
** NOTE: s_hold/place_hold are just to return
** back the first index like how str in str[20]
** is returned.
**
** NOTE: We also appended a NULL
** at the end of the 2d array Originally
** I had it without and it worked fine.
** But, it would sometimes pass and not pass
** when in 42FileChecker.
*/

char			**ft_strsplit(char const *s, char c)
{
	char	**array_of_strings;
	char	**first_index;
	char	*s_hold;
	size_t	i;
	size_t	num_words;

	if (!s)
		return (NULL);
	num_words = 0;
	i = 0;
	num_words = ft_word_count(s, c);
	s_hold = (char *)s;
	array_of_strings = (char **)malloc(sizeof(char *) * num_words + 1);
	if (array_of_strings == NULL)
		return (NULL);
	first_index = array_of_strings;
	while (i++ < num_words)
	{
		s_hold = ft_skip_delim(s_hold, c);
		*array_of_strings++ = ft_return_word(s_hold, c);
		s_hold = ft_skip_word(s_hold, c);
	}
	*array_of_strings = 0;
	return (first_index);
}
