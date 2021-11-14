// Odd Grasshopper :
#include <stdio.h>
int jump(int x, int step, int n)

{
    if (step == n + 1)
    {
        return x;
    }
    if (x % 2)
    {
        //if odd => jump right
        x = x + step;
        return jump(x, step + 1, n);
    }
    //if even => jump left
    x = x - step;
    return jump(x, step + 1, n);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, step;
        scanf("%d %d", &x, &step);
        printf("%d\n", jump(x, 0, step));
    }
    return 0;
}