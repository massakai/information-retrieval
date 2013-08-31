#include <iostream>
#include <algorithm>

#include "intersect.hpp"

struct Print
{
  void operator()(DocId doc_id) { std::cout << doc_id << " "; }
};

int main()
{
  PostingList p1{1, 2, 4, 11, 31, 45, 173, 174};
  std::cout << "PostingList1(" << p1.size() << "): ";
  std::for_each(p1.begin(), p1.end(), Print());
  std::cout << std::endl;

  PostingList p2{2, 31, 54, 101};
  std::cout << "PostingList2(" << p2.size() << "): ";
  std::for_each(p2.begin(), p2.end(), Print());
  std::cout << std::endl;

  PostingList result;
  intersect(p1, p2, result);

  std::cout << "Result(" << result.size() << "): ";
  std::for_each(result.begin(), result.end(), Print());
  std::cout << std::endl;

  return 0;
}

