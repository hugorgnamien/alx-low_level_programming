// A Naive recursive C# program
// to find minimum of coins
// to make a given change V
using System;
class coin
{
// m is size of coins array
// (number of different coins)
static int minCoins(int []coins, int m, int V)
{
// base case
if (V == 0) return 0;
// Initialize result
int res = int.MaxValue;
// Try every coin that has
// smaller value than V
for (int i = 0; i < m; i++)
{
if (coins[i] <= V)
{
int sub_res = minCoins(coins, m,
V - coins[i]);
// Check for INT_MAX to
// avoid overflow and see
// if result can minimized
if (sub_res != int.MaxValue &&
sub_res + 1 < res)
res = sub_res + 1;
}
}
return res;
}
// Driver Code
public static void Main()
{
int []coins = {9, 6, 5, 1};
int m = coins.Length;
int V = 11;
Console.Write("Minimum coins required is "+
minCoins(coins, m, V));
}
}
// This code is contributed by nitin mittal.
