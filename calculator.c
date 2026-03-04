#include <stdio.h>

int plus(int x, int y)
{
    return x + y;
}
int multifly(int x, int y)
{
    return x * y;
}

int tree_add(int x, int y, int z)
{
    return x + y + z;
}

double divide(int x, int y)
{
	return (double)x / y;
}

int minus(int x, int y)
{
    return x - y;
}

int mod(int x, int y)
{
    return x % y;
}

int main()
{
    int c;
    int x, y, z;

    while(1)
    {
        printf("1: plus, 2:minus, 3:multiple, 4:divide, 5:three add, 7:mod \n");
        (void)scanf("%d", &c);
        switch(c)
        {
            case 1:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                printf("%d\n", plus(x, y));
                break;

            case 2:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                printf("%d\n", minus(x, y));
                break;

            case 3:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                printf("%d\n", multifly(x, y));
                break;
            
            case 4:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                if (y == 0) {
                    printf("can't divided by zero\n");
                    break;
                }
                printf("%.2f\n", divide(x, y));
                break;

            case 5:
                printf("please enter x and y: ");
                (void)scanf("%d %d %d", &x, &y, &z);
                printf("%d\n", three_add(x, y, z));
                break;

            case 7:
                printf("please enter x and y: ");
                (void)scanf("%d %d", &x, &y);
                if (y == 0) {
                    printf("can't divided by zero\n");
                    break;
                }
                printf("%d\n", mod(x, y));
                break;

            default:
                continue;
        }
    }

    return 0;
}
