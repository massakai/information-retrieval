#include <vector>

typedef unsigned DocId;
typedef std::vector<DocId> PostingList;

// $B#2$D$N%]%9%F%#%s%0%j%9%H$N6&DL=89g$r5a$a$k4X?t(B
void intersect(const PostingList &p1, const PostingList &p2, PostingList &result);

