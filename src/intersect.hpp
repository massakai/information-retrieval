#include <vector>

typedef unsigned DocId;
typedef std::vector<DocId> PostingList;

// ２つのポスティングリストの共通集合を求める関数
void intersect(const PostingList &p1, const PostingList &p2, PostingList &result);

// 複数のポスティングリストの共通集合を求める関数
void intersect(const std::vector<PostingList> &posting_lists, PostingList &result);
