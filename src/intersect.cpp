#include "intersect.hpp"

void intersect(const PostingList &p1, const PostingList &p2, PostingList &result)
{
  PostingList answer;

  PostingList::const_iterator itr1 = p1.begin(), itr2 = p2.begin();
  while (itr1 != p1.end() && itr2 != p2.end()) {
    if (*itr1 == *itr2) {
      answer.push_back(*itr1);
      ++itr1, ++itr2;
    } else if (*itr1 < *itr2) {
      ++itr1;
    } else {
      ++itr2;
    }
  }

  result.assign(answer.begin(), answer.end());
}

