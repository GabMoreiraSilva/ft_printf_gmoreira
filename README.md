# ft_printf_gmoreira
Recreation of printf function in a simple way

Função recriando o printf com as flags cspduxX%

Para compilar a lib basta rodar make
```
make
```

Exemplo de Main
```
#include "libft.h"

int main()
{
  ft_printf("%s \n", "String de teste");
}
```


Para rodar basta compilar com o arquivo .a
```
gcc -Wall -Wextra -Werror main.c libftprintf.a
```
