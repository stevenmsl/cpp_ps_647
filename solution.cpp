#include "solution.h"
#include "util.h"
#include <string>

using namespace sol125;
using namespace std;

/*takeaways
  - Brute force
  - time complexity O(n^2)
  - everyone takes turns being the center
    and count how many different palindromes
    we can generate from there
*/
int Solution::count(string s)
{
  int count = 0, n = s.size();

  /* everyone takes turn to be the center */
  for (auto i = 0; i < n; i++)
  {
    /* i serves the sole center or in (i, i+1) as part of the center */
    /* palindrome has an odd number of chars */
    count += _count(i, i, s);
    /* palindrome has an even number of chars */
    count += _count(i, i + 1, s);
  }

  return count;
}

int Solution::_count(int l, int r, const string &s)
{
  int n = s.size(), counter = 0;

  /* everytime s[l] == s[r] we have a new palindrome */
  while (l >= 0 && r < n && s[l] == s[r])
    counter++, l--, r++;

  return counter;
}
