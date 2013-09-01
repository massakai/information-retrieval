#include <iostream>
#include <algorithm>

#include "intersect.hpp"

template<typename Element>
struct Print
{
  void operator()(Element element) { std::cout << element << " "; }
};

void PrintPostingList(const std::string &name, const PostingList &list)
{
  std::cout << name << "(" << list.size() << "): ";
  std::for_each(list.begin(), list.end(), Print<DocId>());
  std::cout << std::endl;
}

int main()
{
  PostingList p1{1, 2, 4, 11, 31, 45, 173, 174};
  PostingList p2{2, 31, 54, 101};
  PostingList p3{1, 2, 4, 5, 6, 16, 57, 132};

  PrintPostingList("PostingList1", p1);
  PrintPostingList("PostingList2", p2);
  PrintPostingList("PostingList3", p3);

  std::vector<PostingList> posting_lists{p1, p2, p3};
  PostingList result;
  intersect(posting_lists, result);

  PrintPostingList("Result", result);

  return 0;
}

