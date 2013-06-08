#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE]; /*Storage for aloc*/
static char *allocp =  allocbuf; /*Next free position*/

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >=n) {
		allocp += n;
		return allocp - n; //old p
	} else {
		return 0;
	}
}

void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
		allocp = p;
	}
}

void strcpy(char *s, char *t) 
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0') {
		i++;
	}
}

void strcpy(char *s, char *t)
{
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

void strcpy(char *s, char *t)
{
	while ((*s++ = *t++) != '\0')
		;
}

void strcpy(char *s, char *t)
{
	while (*s++ = *t++)
		;
}

int strcmp(char *s, char *t) 
{
	int i;

	for(i = 0; s[i] == t[i]; i++) {
		if (s[i] == '\0') {
			return 0;
		}
	}
	return s[i] - t[i];
}

int strcmp(char *s, char *t) 
{
	for ( ; *s == *t; s++, t++) {
		if (*s == '\0') {
			return 0;
		}
	}
	return *s - *t;
}