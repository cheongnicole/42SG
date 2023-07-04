# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 11:51:34 by ncheong           #+#    #+#              #
#    Updated: 2023/07/04 11:51:36 by ncheong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rcs libft.a *.o
find . -name "*.o" -type f -delete
