#include <stdio.h>

int plus(int x, int y)
{
    return x + y;
}
int multifly(int x, int y)
{
    return x * y;
}

double divide(int x, int y)
{
	return x / y;
}

int main()
{
    int c;
    int x, y;

    while(1)
    {
        printf("1: plus, 2:minus, 3:multiple, 4:divide\n");
        (void)scanf("%d", &c);
        switch(c)
        {
            case 1:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                printf("%d\n", plus(x, y));
                break;
	    case 4:
		printf("please enter x and y: ");
		(void)scanf("%d %d", &x, &y);
		if (y == 0) {
			printf("can't divided by zero\n");
			break;
		}
		printf("%.2\n", divide(x, y));
		break;
	    case 3
		printf("please enter x and y: ");
		(void)scanf("%d %d", &x, &y);
                printf("%d\n", multifly(x, y));
                break;
            default:
                continue;
        }
    }

    return 0;
}
