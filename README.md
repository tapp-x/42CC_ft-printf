# CC42_ft-printf

## Description

ft_printf est une implémentation personnalisée de la fonction printf en C. Ce projet permet de gérer différents formats de conversion pour l'affichage de données.

## Contenu

La fonction gère les conversions suivantes :

- `%c` - Affiche un caractère
- `%s` - Affiche une chaîne de caractères
- `%p` - Affiche un pointeur en hexadécimal
- `%d` - Affiche un nombre décimal (base 10)
- `%i` - Affiche un entier en base 10
- `%u` - Affiche un nombre décimal non signé
- `%x` - Affiche un nombre en hexadécimal (minuscules)
- `%X` - Affiche un nombre en hexadécimal (majuscules)
- `%%` - Affiche le symbole %

## Compilation

Pour compiler la bibliothèque, utilisez le Makefile fourni. Exécutez simplement la commande suivante dans le terminal :
```
make
```

## Utilisation

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Test string: %s\n", "Hello");
    ft_printf("Test number: %d\n", 42);
    return (0);
}
```
