/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    for(int i=0;i<intervals.size();i++){
        //case 1: if interval lies totally in given interval
        if(intervals[i].start<=newInterval.start && newInterval.end<=intervals[i].end){
            return intervals;
        }
        //case 2: if interval lies partially in one given interval
        if(intervals[i].end >= newInterval.start && newInterval.end<intervals[i+1].start){
            intervals[i].end = newInterval.end;
            return intervals;
        }
        
        if(intervals[i].end>=newInterval.start && intervals[i+1].start<=newInterval.end){
              vector<Interval> ans;
              for(int x = 0 ;x<i;x++){
                 
                 ans.push_back(Interval s (intervals[i].start,intervals[i].end));
              }
              int x = i;
              while(intervals[x].start>newInterval.end){
                  x++;
              }
              ans.push_back(struct Interval s(intervals[i].start,intervals[x].end));
              for(int y = x+1;y<intervals.size();i++){
                  ans.push_back(struct Interval s(intervals[y].start,intervals[y].end));
              }
              return ans;
        }
    }
}


const int N = 100005;

int a[N];

struct segment_tree {
  vector<int> st;

  void init(int n) {
    st.resize(4 * n,0);
  }

  void build(int start, int end, int node) {
    if (start == end) {
      st[node] = a[start];
      return;
    }
    int mid = (start + end) / 2;
    // left
    build(start, mid, 2 * node + 1);
    //right
    build(mid + 1, end, 2 * node + 2);
    st[node] = st[2 * node + 1] + st[2 * node + 2];
  }

  int query(int start, int end, int l, int r, int node) {
    // no overlap
    if (start > r || end < l) {
      return 0;
    }
    // complete
    if (start >= l && end <= r) {
      return st[node];
    }
    // partial
    int mid = (start + end) / 2;
    int q1 = query(start, mid, l, r, 2 * node + 1);
    int q2 = query(mid + 1 , end, l, r, 2 * node + 2);
    return q1 + q2;
  }

  void update(int start, int end, int index, int val, int node) {
    if (start == end) {
      a[index] = st[node] = val;
      return ;
    }
    int mid = (start + end) / 2;
    if (index <= mid) {
      update(start, mid, index, val, 2 * node + 1);
    }
    else {
      update(mid + 1, end, index, val, 2 * node + 2);
    }
    st[node] = st[2 * node + 1] + st[2 * node + 2];
  }

} G;