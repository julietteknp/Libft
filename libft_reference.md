# 📚 Référence Libft — Fonctions essentielles

---

## 🔤 Fonctions de vérification de caractères

Ces fonctions prennent toutes un `int c` en paramètre (valeur ASCII du caractère) et retournent un entier non nul si vrai, 0 sinon.

---

### `ft_isalpha`
```c
int ft_isalpha(int c);
```
Vérifie si `c` est une lettre de l'alphabet.

| Plage valide | Cas limites |
|---|---|
| `'a'` à `'z'` (97-122) | chiffres → 0 |
| `'A'` à `'Z'` (65-90) | espaces → 0 |
| | `'\0'` → 0 |

---

### `ft_isdigit`
```c
int ft_isdigit(int c);
```
Vérifie si `c` est un chiffre.

| Plage valide | Cas limites |
|---|---|
| `'0'` à `'9'` (48-57) | lettres → 0 |
| | caractères spéciaux → 0 |

---

### `ft_isalnum`
```c
int ft_isalnum(int c);
```
Vérifie si `c` est une lettre **ou** un chiffre. Combinaison de `isalpha` et `isdigit`.

| Plage valide | Cas limites |
|---|---|
| `'a'`-`'z'`, `'A'`-`'Z'`, `'0'`-`'9'` | espaces → 0 |
| | `'_'` → 0 (pas alphanumérique !) |

---

### `ft_isascii`
```c
int ft_isascii(int c);
```
Vérifie si `c` appartient à la table ASCII standard.

| Plage valide | Cas limites |
|---|---|
| 0 à 127 **inclus** | 128 et plus → 0 |
| Inclut les non-imprimables (0-31) | valeurs négatives → 0 |
| Inclut DEL (127) | |

> ⚠️ Contrairement à `isprint`, `isascii` accepte **tous** les caractères de 0 à 127, y compris les non-imprimables.

---

### `ft_isprint`
```c
int ft_isprint(int c);
```
Vérifie si `c` est un caractère imprimable (visible + espace).

| Plage valide | Cas limites |
|---|---|
| 32 (espace) à **126** inclus | 127 (DEL) → 0 ⚠️ |
| | 0-31 (caractères de contrôle) → 0 |

> ⚠️ Piège classique : la plage va jusqu'à **126**, pas 127 !

---

## 📏 Fonctions de chaînes

---

### `ft_strlen`
```c
size_t ft_strlen(const char *s);
```
Retourne la longueur de la chaîne sans compter le `'\0'` final.

| Cas limites |
|---|
| `s == NULL` → retourner 0 (comportement défensif) |
| chaîne vide `""` → retourner 0 |

> ⚠️ Si tu utilises `*str++` dans la boucle, ne pas ajouter de `str++` supplémentaire — tu avancerais deux fois !

---

### `ft_strlcpy`
```c
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```
Copie au maximum `size - 1` caractères de `src` dans `dst`, avec `'\0'` final garanti.

**Retourne** : longueur de `src` (pas ce qui a été copié).

| Cas limites |
|---|
| `size == 0` → ne copie rien, retourne `strlen(src)` |
| `src` plus long que `size` → tronque et ajoute `'\0'` |
| `dst` doit avoir au moins `size` octets |

---

### `ft_strlcat`
```c
size_t ft_strlcat(char *dst, const char *src, size_t size);
```
Concatène `src` à la fin de `dst` dans la limite de `size` octets total.

**Retourne** : longueur totale souhaitée = `strlen(dst) + strlen(src)`.

| Cas limites |
|---|
| `size <= strlen(dst)` → retourne `size + strlen(src)` |
| `'\0'` final toujours garanti si `size > strlen(dst)` |

---

### `ft_strchr`
```c
char *ft_strchr(const char *s, int c);
```
Retourne un pointeur vers la **première** occurrence de `c` dans `s`.

| Cas limites |
|---|
| `c` non trouvé → `NULL` |
| `c == '\0'` → retourne pointeur vers le `'\0'` final ✓ |
| `s == NULL` → comportement indéfini, protéger si nécessaire |

---

### `ft_strrchr`
```c
char *ft_strrchr(const char *s, int c);
```
Retourne un pointeur vers la **dernière** occurrence de `c` dans `s`.

| Cas limites |
|---|
| `c` non trouvé → `NULL` |
| `c == '\0'` → retourne pointeur vers le `'\0'` final ✓ |
| Même que `strchr` mais parcourt jusqu'à la fin avant de retourner |

---

### `ft_strncmp`
```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```
Compare les `n` premiers caractères de `s1` et `s2`.

**Retourne** : 0 si égaux, positif si `s1 > s2`, négatif si `s1 < s2`.

| Cas limites |
|---|
| `n == 0` → retourne 0 sans lire quoi que ce soit |
| S'arrête au `'\0'` même si `n` pas atteint |
| Comparer en `unsigned char` pour éviter les bugs avec les valeurs négatives |
| Utiliser `n > 1` dans la boucle et laisser le `return` faire la dernière comparaison |

---

### `ft_strnstr`
```c
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
```
Cherche `needle` dans `haystack` dans la limite de `len` caractères.

**Retourne** : pointeur vers le début de l'occurrence, ou `NULL`.

| Cas limites |
|---|
| `needle` vide `""` → retourne `haystack` directement |
| `len == 0` → retourne `NULL` (sauf si `needle` vide) |
| Ne dépasse jamais `len` caractères dans `haystack` |
| Nécessite de sauvegarder `needle_start` pour réinitialiser après chaque tentative |

---

## 🧠 Fonctions mémoire

Ces fonctions travaillent sur des `void *` — elles opèrent octet par octet via un cast en `unsigned char *`.

---

### `ft_memset`
```c
void *ft_memset(void *s, int c, size_t n);
```
Remplit les `n` premiers octets de `s` avec la valeur `c`.

**Retourne** : `s`.

| Cas limites |
|---|
| `n == 0` → ne fait rien, retourne `s` |
| `c` est casté en `unsigned char` |

---

### `ft_bzero`
```c
void ft_bzero(void *s, size_t n);
```
Met les `n` premiers octets de `s` à **zéro numérique**.

| Cas limites |
|---|
| `n == 0` → ne fait rien |
| ⚠️ `*str = 0` et non `*str = '0'` (qui vaut 48 !) |

---

### `ft_memcpy`
```c
void *ft_memcpy(void *dst, const void *src, size_t n);
```
Copie `n` octets de `src` vers `dst`.

**Retourne** : `dst`.

| Cas limites |
|---|
| `n == 0` → retourne `dst` |
| Comportement indéfini si zones se chevauchent → utiliser `memmove` |
| `dst == NULL && src == NULL` → retourne `NULL` |

---

### `ft_memmove`
```c
void *ft_memmove(void *dst, const void *src, size_t n);
```
Comme `memcpy` mais gère les chevauchements en copiant dans le bon sens.

**Retourne** : `dst`.

| Cas limites |
|---|
| Si `dst > src` → copier de droite à gauche (reverse) |
| Si `dst < src` → copier de gauche à droite (normal) |
| `n == 0` → retourne `dst` |

---

### `ft_memchr`
```c
void *ft_memchr(const void *s, int c, size_t n);
```
Cherche la première occurrence de `c` dans les `n` premiers octets de `s`.

**Retourne** : pointeur vers l'occurrence ou `NULL`.

| Cas limites |
|---|
| `n == 0` → retourne `NULL` |
| `c` casté en `unsigned char` |

---

### `ft_memcmp`
```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```
Compare les `n` premiers octets de `s1` et `s2`.

**Retourne** : 0 si égaux, différence du premier octet différent sinon.

| Cas limites |
|---|
| `n == 0` → retourne 0 |
| Comparer en `unsigned char` |

---

## 🔄 Fonctions de conversion

---

### `ft_toupper`
```c
int ft_toupper(int c);
```
Convertit une minuscule en majuscule.

| Cas limites |
|---|
| Déjà une majuscule → retourné inchangé |
| Pas une lettre → retourné inchangé |
| Différence entre `'a'` et `'A'` = 32 (constante ASCII) |

---

### `ft_tolower`
```c
int ft_tolower(int c);
```
Convertit une majuscule en minuscule.

| Cas limites |
|---|
| Déjà une minuscule → retourné inchangé |
| Pas une lettre → retourné inchangé |

---

### `ft_atoi`
```c
int ft_atoi(const char *str);
```
Convertit une chaîne en entier.

**Ordre des opérations** :
1. Sauter les espaces blancs (`' '`, `'\t'`, `'\n'`, `'\r'`, `'\f'`, `'\v'`)
2. Lire le signe optionnel `+` ou `-`
3. Lire les chiffres

| Cas limites |
|---|
| `"   -42abc"` → -42 (s'arrête au premier non-chiffre) |
| `"abc"` → 0 |
| Chaîne vide → 0 |
| Overflow → comportement indéfini (pas de vérification dans `atoi`) |
| ⚠️ Avancer `str` après le signe avant de lire les chiffres ! |

---

## 🗄️ Fonctions d'allocation

---

### `ft_calloc`
```c
void *ft_calloc(size_t nmemb, size_t size);
```
Alloue `nmemb * size` octets initialisés à **zéro**.

| Cas limites |
|---|
| `nmemb == 0` ou `size == 0` → retourne `NULL` |
| Overflow de `nmemb * size` → retourne `NULL` |
| Vérification : `size > SIZE_MAX / nmemb` |
| ⚠️ Initialiser à `0` numérique, pas `'0'` ! |

---

### `ft_strdup`
```c
char *ft_strdup(const char *s);
```
Alloue et retourne une copie de `s`.

| Cas limites |
|---|
| `s == NULL` → retourne `NULL` |
| `malloc` échoue → retourne `NULL` |
| Allouer `strlen(s) + 1` octets (pour le `'\0'`) |
| ⚠️ Sauvegarder le début du pointeur avant de l'avancer ! |

---

## 🎯 Pièges récurrents à retenir

```
1. '0' (char, vaut 48) ≠ 0 (zéro numérique)
2. isprint va jusqu'à 126, pas 127 (DEL n'est pas imprimable)
3. isascii va de 0 à 127 INCLUS (contrairement à isprint)
4. strchr et strrchr gèrent '\0' comme caractère valide
5. strncmp : utiliser n > 1 dans la boucle, pas n > 0
6. Toujours sauvegarder le début d'un pointeur avant de l'avancer
7. Toujours vérifier NULL en entrée avant de déréférencer
8. memmove : copier en reverse si dst > src
9. strnstr : sauvegarder needle_start pour réinitialiser
10. atoi : avancer str après le signe avant de lire les chiffres
```
