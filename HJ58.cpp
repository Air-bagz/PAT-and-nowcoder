#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k,a[1000];
    scanf("%d %d",&n,&k);
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for (int i=0; i<k; i++)
        printf("%d ",a[i]);
    return 0;
}
