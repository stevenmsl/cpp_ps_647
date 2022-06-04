#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol125;

/*
Input: "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
*/

tuple<string, int>
testFixture1()
{
  return make_tuple("abc", 3);
}
/*
Input: "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
*/
tuple<string, int>
testFixture2()
{
  return make_tuple("aaa", 6);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.count(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.count(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}