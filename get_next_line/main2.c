/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antolefe <antolefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:06:17 by antolefe          #+#    #+#             */
/*   Updated: 2024/09/11 17:06:57 by antolefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h" // Assure-toi que le bon header est inclus
#include <fcntl.h>         // pour open()
#include <stdio.h>         // pour printf() et perror()
#include <stdlib.h>        // pour exit()

// void	test_get_next_line(int fd)
// {
// 	char	*line;
// 	int		line_number;

// 	line_number = 1;
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("Line %d: %s", line_number++, line);
// 		free(line);
// 	}
// 	printf("End of file reached or error occurred.\n");
// }

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test_files/multiple_newlines.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		exit(EXIT_FAILURE);
// 	}
// 	printf("=== Test 1: multiple_newlines ===\n");
// 	test_get_next_line(fd);
// 	close(fd);
// }

// int	main(void)
// {
// 	char	*s;

// 	s = get_next_line(0);
// 	printf("s : %s\n", s);
// 	while (s)
// 	{
// 		putstr(s);
// 		putchar('\n');
// 		free(s);
// 		s = get_next_line(0);
// 	}
// 	return (0);
// }


int	main(void)
{
	int 	fd;

	fd = open("file", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}
