/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:32:55 by lryst             #+#    #+#             */
/*   Updated: 2020/06/25 16:30:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int64_t ft_strlen(char *str);

int main()
{
    //char str[] = "Hello word!";

    printf("%ld\n", ft_strlen("coucou"));
    
    return(0);
}