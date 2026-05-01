# 📚 Libft — Ma première bibliothèque en C

> Réimplémentation from scratch des fonctions essentielles de la bibliothèque standard C, réalisée dans le cadre du cursus de l'école 42.

---

## 📖 C'est quoi la Libft ?

La **Libft** est le tout premier projet du cursus 42. L'objectif est de recoder soi-même un ensemble de fonctions de la bibliothèque standard C (`libc`), ainsi que des fonctions utilitaires supplémentaires qui seront réutilisées tout au long du cursus.

Plutôt que d'utiliser les fonctions toutes faites, on les réimplémente pour en comprendre le fonctionnement interne — la gestion de la mémoire, les pointeurs, les chaînes de caractères, et les structures de données.

---

## 🗂️ Structure du projet

```
libft/
├── Makefile          → compilation du projet
├── libft.h           → prototypes et structure t_list
├── ft_*.c            → fonctions mandatory
```

---

## ⚙️ Compilation

```bash
make          # compile les fonctions mandatory → génère libft.a
make bonus    # compile avec les fonctions de listes chaînées
make clean    # supprime les fichiers objets (.o)
make fclean   # supprime les .o et libft.a
make re       # recompile tout from scratch
```

Pour utiliser la libft dans un projet :

```c
#include "libft.h"
```

```bash
cc mon_programme.c -L. -lft -o mon_programme
```

---

## 📦 Fonctions implémentées

---

### 🔤 Fonctions de vérification de caractères

Ces fonctions vérifient la nature d'un caractère. Elles prennent un `int` en paramètre (valeur ASCII) et retournent un entier non nul si la condition est vraie, 0 sinon.

| Fonction | Description | Equivalent libc |
|----------|-------------|-----------------|
| `ft_isalpha` | Vérifie si le caractère est une lettre (`a-z` ou `A-Z`) | `isalpha` |
| `ft_isdigit` | Vérifie si le caractère est un chiffre (`0-9`) | `isdigit` |
| `ft_isalnum` | Vérifie si le caractère est alphanumérique (lettre ou chiffre) | `isalnum` |
| `ft_isascii` | Vérifie si le caractère appartient à la table ASCII (0-127) | `isascii` |
| `ft_isprint` | Vérifie si le caractère est imprimable (32-126) | `isprint` |

---

### 🔄 Fonctions de conversion

Ces fonctions convertissent un caractère ou une chaîne vers un autre format.

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_toupper` | `int ft_toupper(int c)` | Convertit une minuscule en majuscule. Retourne le caractère inchangé s'il n'est pas une minuscule. |
| `ft_tolower` | `int ft_tolower(int c)` | Convertit une majuscule en minuscule. Retourne le caractère inchangé s'il n'est pas une majuscule. |
| `ft_atoi` | `int ft_atoi(const char *str)` | Convertit une chaîne en entier. Gère les espaces en début, le signe `+`/`-`, et s'arrête au premier caractère non numérique. |
| `ft_itoa` | `char *ft_itoa(int n)` | Convertit un entier en chaîne allouée avec `malloc`. Gère les négatifs et `INT_MIN`. |

---

### 🧠 Fonctions de manipulation mémoire

Ces fonctions opèrent directement sur des zones mémoire via des pointeurs `void *`.

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Remplit les `n` premiers octets de `s` avec la valeur `c`. Retourne `s`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Met les `n` premiers octets de `s` à zéro. Équivalent à `memset(s, 0, n)`. |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copie `n` octets de `src` vers `dst`. Comportement indéfini si les zones se chevauchent. |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t n)` | Comme `memcpy` mais gère les chevauchements en copiant dans le bon sens. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Cherche la première occurrence de `c` dans les `n` premiers octets de `s`. Retourne un pointeur ou `NULL`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compare les `n` premiers octets de `s1` et `s2`. Retourne 0 si égaux, une valeur positive ou négative sinon. |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Alloue un tableau de `nmemb` éléments de `size` octets, initialisés à zéro. Gère l'overflow. |

---

### 🔡 Fonctions de manipulation de chaînes

Ces fonctions permettent de manipuler des chaînes de caractères (`char *`).

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Retourne la longueur de la chaîne sans compter le `'\0'` final. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copie au maximum `size - 1` caractères de `src` dans `dst` avec `'\0'` final. Retourne la longueur de `src`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Concatène `src` à `dst` dans la limite de `size` octets. Retourne la longueur totale souhaitée. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Retourne un pointeur vers la **première** occurrence de `c` dans `s`, ou `NULL`. Gère la recherche du `'\0'`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Retourne un pointeur vers la **dernière** occurrence de `c` dans `s`, ou `NULL`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compare au maximum `n` caractères de `s1` et `s2`. Retourne 0 si égaux. |
| `ft_strnstr` | `char *ft_strnstr(const char *h, const char *n, size_t len)` | Cherche `needle` dans `haystack` dans la limite de `len` caractères. Retourne un pointeur ou `NULL`. |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Alloue et retourne une copie de `s`. Retourne `NULL` si `malloc` échoue. |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Alloue et retourne une sous-chaîne de `s` commençant à `start` sur `len` caractères maximum. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Alloue et retourne la concaténation de `s1` et `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Alloue et retourne `s1` sans les caractères de `set` en début et fin de chaîne. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Alloue et retourne un tableau de sous-chaînes de `s` séparées par `c`. Le tableau se termine par `NULL`. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Crée une nouvelle chaîne en appliquant `f` à chaque caractère de `s` avec son index. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applique `f` à chaque caractère de `s` en passant son index et son adresse pour modification directe. |

---

### 🖨️ Fonctions d'affichage (file descriptor)

Ces fonctions écrivent sur un file descriptor donné via `write`. Les fd standards sont `1` (stdout) et `2` (stderr).

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Écrit le caractère `c` sur le fd. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Écrit la chaîne `s` sur le fd. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Écrit la chaîne `s` suivie d'un `'\n'` sur le fd. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Écrit l'entier `n` sur le fd. Gère les négatifs et `INT_MIN`. |

---

## 🔗 Listes chaînées

Une liste chaînée est une structure de données où chaque élément (**noeud**) contient une donnée et un pointeur vers le noeud suivant.

```
[content|next] ──→ [content|next] ──→ [content|next] ──→ NULL
   noeud 1             noeud 2             noeud 3
```

### Structure utilisée

```c
typedef struct s_list
{
    void            *content;   // donnée (peut être n'importe quel type)
    struct s_list   *next;      // pointeur vers le noeud suivant (NULL si dernier)
}   t_list;
```

### Fonctions de listes chaînées

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Alloue et retourne un nouveau noeud avec `content` et `next = NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Ajoute `new` en tête de liste. Prend `**` pour pouvoir modifier le pointeur de tête. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Ajoute `new` en fin de liste. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Retourne le nombre de noeuds de la liste. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Retourne un pointeur vers le dernier noeud. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Libère le contenu via `del` puis libère le noeud. Ne gère pas les noeuds adjacents. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Libère tous les noeuds depuis `lst` et met `*lst` à `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applique `f` au contenu de chaque noeud de la liste. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Crée une nouvelle liste en appliquant `f` à chaque noeud. Libère avec `del` en cas d'échec. |

---

## 👤 Auteur

**jkonop** — étudiant à l'école 42 Paris
