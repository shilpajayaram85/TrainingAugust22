#include<stdio.h>
#include<stdarg.h>

void sPrintf(char * format, ...);

int main()
{

	sPrintf("Hello\n");
	sPrintf("Hello %d\n", 3);
	return 1;
}

void sPrintf(char * format, ...)
{

	va_list args;
	va_start(args, format);
	
	for(char * p = format; *p != '\0'; p++)
	{
		if(*p == '%')
		{
		p++;
		switch(*p)
		{
		case 'd': {int i = va_arg(args, int);
				  printf("%d", i);}
				  break;

		case 'f': {float f = va_arg(args, float);
				printf("%f", f);}
				break;

		case 'c': {char c = va_arg(args, char);
				printf("%c", c);}
				break;
		}
	}
	else
	{
	putchar(*p);
	}
  }
  va_end(args);
  }

