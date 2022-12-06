#include <stdio.h>

long long int s(long long int a, long long int b, long long int c, long long int d, long long int e, long long int n, long long int m, long long int *arr)
{
  if (n < 0)
    return 0;
  if (n <= 4 && n >= 0)
    return arr[n];
  return (a * s(a, b, c, d, e, n - 1, m, arr) % m + b * s(a, b, c, d, e, n - 2, m, arr) % m + c * s(a, b, c, d, e, n - 3, m, arr) % m + d * s(a, b, c, d, e, n - 4, m, arr) % m + e * s(a, b, c, d, e, n - 5, m, arr) % m);
}

int main()
{
  long long int a, b, c, d, e, n, q, arr[5];
  scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
  scanf("%lld %lld %lld %lld %lld", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
  scanf("%lld", &q);
  for (int i = 0; i < q; i++)
  {
    scanf("%lld", &n);
    printf("%lld\n", s(a, b, c, d, e, n, 1000000007, arr));
  }
}
