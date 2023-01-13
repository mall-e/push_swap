/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:10:40 by muyazici          #+#    #+#             */
/*   Updated: 2022/12/09 16:38:01 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	wordCounter(char const *s, char c);
static int *pointofindex(char const *s, char c, int wordcounter);
void	dupMultiPtr(char **multiptr, const char *s, int *indexes, int wordcounter, char c);
static int length(const char *s, char c);


char	**ft_split(char const *s, char c)
{
	char **multiptr;
	int *indexes;
	int wordcounter;

	if(!s)
		return (NULL);
	wordcounter = wordCounter(s, c);
	multiptr = (char **)malloc((sizeof(char *) * wordcounter) + 1);
	if (!multiptr)
		return 0;
	indexes = pointofindex(s, c, wordcounter);
	dupMultiPtr(multiptr, s, indexes, wordcounter, c);
	free(indexes);
	multiptr[wordcounter] = NULL;
	return multiptr;
}

static int	wordCounter(char const *s, char c)
{
	int counter;
	int a;

	a = 1; // 1 = true 0 false  //a'yı ilk kelimeyi almasi icin basta 1 yaptik
	counter = 0;
	while(*s != '\0')
	{
		if (a == 1 && *s != c) // *s != c kontrolunu ilk kelime ayrac'a esit ise iki farkli kelime olarak almasin diye yaptik
			counter++;
		a = 0;
		if (*s == c) // ayrac kotrolu yaptik
			a = 1;
		s++; // bir indis arttirdik
		if (*s == c) // sonra ki indis ayrac mi kontrolunu yapiyoruz
			a = 0;
	}
	return counter;
}

static int *pointofindex(char const *s, char c, int wordcounter)
{
	int	*indexes; //kelimelerin baslangic indeksleri
	int i;
	int isword; //kelime mi diye kontrol ediliyor
	int holder; // indexes'ın index tutucusu

	indexes = (int *)malloc(wordcounter * sizeof(int) + 1); //alan tahsis ediliyor
	if (!indexes)
		return 0;
	i = 0;
	holder = 0;
	isword = 1; // eger baslangicta virgul yok ise ilk karakteri kelime baslangici olarak almasi icin 1 verildi
	while (s[i] != '\0')
	{
		if(s[i] == c) //virgul mu
		{
			isword = 0; // sonra ki kontrol oncesi 0 yapiliyor sebebi 1den fazla yan yana virgul gelme olasiligini dusunerek yaptik
			if (s[i + 1] != c) //sonra ki indis eger virgul ise kontrol yapiyor, degil ise isword 1 yapiyor
				isword = 1;
		}
		if(isword == 1)
			indexes[holder++] = i; //indisi indexes pinterına atiyoruz
		i++;
		isword = 0;
	}

	indexes[holder] = i;
	/*int q = 0;
	while(q < wordcounter + 1)
	{
		printf("%d\n", indexes[q]);
		q++;
	}*/
	return (indexes);
}

void	dupMultiPtr(char **multiptr, const char *s, int *indexes, int wordcounter, char c)
{
	int beggining;
	int a;
	int counter;
	int ending;
	const char *p;

	int i = 0;
	p = s;
	a = 0;
	while(i < wordcounter)
	{
		beggining = indexes[i];
		counter = length(&p[beggining], c);
		ending = beggining + counter + 1;
		multiptr[i] = (char *)malloc(counter * sizeof(char));
		if (!multiptr[i])
			return ;
		a = 0;
		while(beggining < ending)
		{
			if (s[beggining] != c)
				multiptr[i][a++] = s[beggining];
			multiptr[i][a] = '\0';
			beggining++;
		}
		i++;
	}
}

static int length(const char *s, char c) //kelimelerin uzunlugu aliniyor.
{
	int counter;

	counter = 0;
	if (*s == c)
		s++;
	while ((*s != '\0') && (*s != c)) //null ve ayrac'a kadar donduruyor
		{
			counter++; //null ve ayrac olmadıgi surece counter arttıriliyor
			s++;
		}
	return counter;
}
