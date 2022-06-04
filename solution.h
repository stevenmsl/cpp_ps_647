
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol125
{

  class Solution
  {
  private:
    int _count(int l, int r, const string &s);

  public:
    int count(string s);
  };
}
#endif