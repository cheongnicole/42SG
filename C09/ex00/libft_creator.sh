rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rcs libft.a *.o
find . -name "*.o" -type f -delete
