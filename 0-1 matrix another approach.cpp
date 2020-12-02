#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

// int mod = 1e9+7;
// struct op
// {
// 	bool operator()(const pair<long long , long long > &a , const pair<long long , long long > &b) const
// 	{
// 		if(a.first == b.first) return a.second < b.second ;
// 		return a.first < b.first ;
// 	}
// };

// void merge_intervals(vector<pair<long long , long long >> &intervals)
// {
// 	sort(intervals.begin() , intervals.end() , op());
// 	stack<pair<long long , long long >> s;
// 	for(long long i = 0 ; i < (intervals.size()) ; ++i){
// 		if(s.empty() == true){
// 			s.push({intervals[i].first , intervals[i].second});
// 		}
// 		else{
// 			long long current_start = intervals[i].first;
// 			long long previous_end =  s.top().second;
// 			if(current_start <= previous_end){
// 				long long previous_start = s.top().first;
// 				long long current_end    = intervals[i].second ;
// 				s.pop();
// 				current_end = max(current_end , previous_end) ;
// 				s.push({previous_start , current_end});

// 			}
// 			else{
// 				s.push({intervals[i].first , intervals[i].second});
// 			}
// 		}
// 	}
// 	intervals.clear();
// 	while(s.empty() == false){
// 		intervals.push_back({s.top().first , s.top().second});
// 		s.pop();
// 	}
// 	return ;
// }

// int rectangleArea(vector<vector<int>>& rectangles) {
// 	vector<vector<long long>> v;
// 	for(long long i = 0 ; i < rectangles.size() ; ++i){
// 		vector<long long > goo ;
// 		goo.push_back(rectangles[i][0]);
// 		goo.push_back(rectangles[i][1]);
// 		goo.push_back(rectangles[i][2]);
// 		goo.push_back(rectangles[i][3]);
// 		v.push_back(goo);
// 	}
// 	set<long long > y;
// 	long long previous_y = -1;
// 	for(long long i = 0 ; i < (v.size()) ; ++i){
// 		y.insert(v[i][1]);
// 		y.insert(v[i][3]);
// 	}
// 	vector<long long> yy;
// 	long long area=  0 ;
// 	for(auto x : y) yy.push_back(x);

// 		for(long long itr = 0 ; itr < (yy.size()) -1; ++itr){
// 			vector<pair<long long ,long long >> intervals;
// 			for(long long i = 0 ; i < (v.size()) ; ++i){
// 				long long minx = v[i][0];
// 				long long maxx = v[i][2];
// 				long long miny = v[i][1];
// 				long long maxy = v[i][3];
// 				if(miny >= yy[itr+1] or maxy <= yy[itr]) continue;
// 				else{
// 					intervals.push_back({minx , maxx}) ;
// 				}
// 			}
// 			long long coveragesum = 0;
// 			merge_intervals(intervals);
// 			for(int i = 0 ; i < (intervals.size()) ; ++i){
// 				long long length = abs(intervals[i].second - intervals[i].first);
// 				coveragesum+=length ;
// 				coveragesum%=mod;
// 			}
// 			area = area + (yy[itr+1] - yy[itr])*coveragesum;
// 			area = area % mod ;
// 		}
// 		return area;
// 	}


// int kMod = 1e9 + 7;

// struct Edge{
// 	Edge() = default;
// 	Edge(int x_i, bool status_i, int y1_i, int y2_i): x(x_i), status(status_i), y1(y1_i), y2(y2_i){

// 	}

// 	int x = 0;
//         bool status = 0;   // 0 means left end, 1 means right end
//         int y1 = 0;
//         int y2 = 0;
//     };

//     struct Compare{
//     	bool operator() (const Edge& a, const Edge& b) {
//     		return a.x < b.x;
//     	}
//     };

//     int VerticalSweep(const map<pair<int, int>, int>& edges, unsigned long long width) {
//     	if(edges.empty()) {
//     		return 0;
//     	}
//     	int prev_y = 0;
//     	unsigned long long total_height = 0;
//     	for(const auto& ele : edges) {
//     		if(ele.second <= 0) {
//     			continue;
//     		}
//     		prev_y = max(prev_y, ele.first.first);
//     		int l = ele.first.second - prev_y;
//     		total_height += (l > 0 ? l : 0);
//     		prev_y = max(prev_y, ele.first.second);
//     	}
//     	return (total_height * width) % kMod;
//     }

//     int rectangleArea(vector<vector<int>>& rectangles) {
//         // build the list
//     	int m = rectangles.size();
//     	vector<Edge> edge_list(2 * m);
//     	for(int i = 0; i < m; ++i) {
//     		int ind = 2*i;
//     		edge_list[ind] = Edge(rectangles[i][0], 0, rectangles[i][1], rectangles[i][3]);
//     		edge_list[ind + 1] = Edge(rectangles[i][2], 1, rectangles[i][1], rectangles[i][3]);
//     	}
//     	std::sort(edge_list.begin(), edge_list.end(), Compare());

//         // Main sweep line
//     	map<pair<int, int>, int> vertical_edges;
//     	int prev_x = 0;
//     	int total_area = 0;
//     	for(const auto& ele : edge_list) {
//     		int width = ele.x - prev_x;
//     		total_area = (total_area + VerticalSweep(vertical_edges, width)) % kMod;
//     		if(ele.status == 0) {
//     			++vertical_edges[make_pair(ele.y1, ele.y2)];
//     		} else {
//     			--vertical_edges[make_pair(ele.y1, ele.y2)];
//     		}
//     		prev_x = ele.x;
//     	}
//     	return total_area;
//     }

    // vertical sweep line

// int M = 1e9+7;

// int helper(map<int,int> &mp)
// {
// 	int pre=0, pre_id=0;
// 	int ans=0;
// 	for(auto it=mp.begin(); it!=mp.end(); it++)
// 	{
// 		if(pre)
// 			ans+=(it->first-pre_id);
// 		pre_id=it->first;
// 		pre+=it->second;
// 	}
// 	return ans;
// }

// int rectangleArea(vector<vector<int>>& rectangles) {
// 	map<int, map<int,int>> mp;
// 	for(auto& r : rectangles)
// 	{
// 		mp[r[0]][r[1]]++;
// 		mp[r[0]][r[3]]--;

// 		mp[r[2]][r[1]]--;
// 		mp[r[2]][r[3]]++;            
// 	}

// 	int ans=0;
// 	int pre_area=0, pre_id=0;
// 	map<int,int> tmp;
// 	for(auto it=mp.begin(); it!=mp.end(); it++)
// 	{
// 		ans=(ans+(long)pre_area*(it->first-pre_id)%M)%M;

// 		pre_id =it->first;
// 		for(auto i=(it->second).begin(); i!=(it->second).end(); i++)
// 		{
// 			tmp[i->first]+=i->second; 
// 		}
// 		pre_area=helper(tmp);
// 	}

// 	return ans;
// }

// class Node {
// public:    
// 	int y, flag, x0, x1;
// 	Node(int y, int flag, int x0, int x1): y(y), flag(flag), x0(x0), x1(x1) {} 
// };
// class SegmentTree {
// private:
// 	int n, h;
// 	int *count, *total, *interval;
// public:
// 	SegmentTree(int n, int* X) {
// 		this->n = n;
// 		fill(count = new int[2 * n], count + 2 * n, 0);
// 		fill(total = new int[2 * n], total + 2 * n, 0);
// 		interval = new int[2 * n];
// 		for (int i = 0; i < n; i++) interval[i + n] = X[i];
// 			for (int i = n - 1; i > -1; i--) interval[i] = interval[i << 1] + interval[(i << 1) ^ 1];
// 				for (h = 0;n;n >>= 1) h++;
// 			}

// 		void assign(int node, int cnt) {
// 			count[node] += cnt;
// 			total[node] = count[node] ? interval[node] : 0;
// 			if (node < n && !count[node]) total[node] = total[node << 1] + total[(node << 1) ^ 1];
// 		}

// 		void pull(int node) {
// 			for (node >>= 1; node > 0; node >>= 1) {
// 				if (!count[node]) total[node] = total[node << 1] + total[(node << 1) ^ 1];
// 			}
// 		}

// 		int query() {
// 			return total[1];
// 		}

// 		void update(int x0, int x1, int flag) {
// 			for (int z0 = x0 + n, z1 = x1 + n; z0 < z1; z0 >>= 1, z1 >>= 1) {
// 				if (z0 & 1) assign(z0++, flag);  
// 				if (z1 & 1) assign(--z1, flag);
// 			}
// 			pull(x0 + n);pull(x1 + n);
// 		}
// 	};

// 	int rectangleArea(vector<vector<int>>& rectangles) {
// 		const int MOD = 1000000007;
// 		auto comp = [](Node *x, Node *y){ return x->y < y->y; };
// 		auto nodes = multiset<Node*, decltype(comp)>(comp);
// 		auto xSet = set<int>();
// 		for (auto &rectangle : rectangles) {
// 			nodes.insert(new Node(rectangle[1], 1, rectangle[0], rectangle[2]));
// 			nodes.insert(new Node(rectangle[3], -1, rectangle[0], rectangle[2]));
// 			xSet.insert(rectangle[0]);
// 			xSet.insert(rectangle[2]);
// 		}
// 		unordered_map<int, int> numMap;
// 		int *X = new int[xSet.size()];
// 		int index = 0, lastX = -1;
// 		for (auto &x : xSet) {
// 			if (lastX >= 0) {
// 				X[index - 1] = x - lastX;
// 			}
// 			numMap[x] = index++;
// 			lastX = x;
// 		}
// 		X[index - 1] = 0;
// 		SegmentTree *root = new SegmentTree(xSet.size(), X);
// 		int lastY = INT_MAX; 
// 		long long area = 0;
// 		for (auto &node : nodes) {
// 			long long deltaY = max(0LL, node->y - lastY);
// 			long long cur_sum_x = root->query();
// 			area = (area + cur_sum_x * deltaY) % MOD;
// 			root->update(numMap[node->x0], numMap[node->x1], node->flag);
// 			lastY = node->y;
// 		}
// 		return area;
// 	}

int rectangleArea(vector<vector<int>>& rectangles) {
        int mod = 1000000000 + 7;
        vector<int> x;
        for (auto r : rectangles) {
            x.push_back(r[0]);
            x.push_back(r[2]);
        }
        sort(x.begin(), x.end());
        vector<int>::iterator end_unique = unique(x.begin(), x.end());
        x.erase(end_unique, x.end());
        unordered_map<int, int> x_i;
        for (int i = 0; i < x.size(); ++i) {
            x_i[x[i]] = i;
        }
        vector<int> count(x.size(), 0);
        vector<vector<int>> L;
        for (auto r : rectangles) {
            int x1 = r[0], y1 = r[1], x2 = r[2], y2 = r[3];
            L.push_back({y1, x1, x2, 1});
            L.push_back({y2, x1, x2, -1});
        }
        sort(L.begin(), L.end());
        long long cur_y = 0, cur_x_sum = 0, area = 0;
        for (auto l : L) {
            long long  y = l[0], x1 = l[1], x2 = l[2], sig = l[3];
            area = (area + (y - cur_y) * cur_x_sum) % mod;
            cur_y = y;
            for (int i = x_i[x1]; i < x_i[x2]; i++)
                count[i] += sig;
            cur_x_sum = 0;
            for (int i = 0; i < x.size(); ++i) {
                if (count[i] > 0)
                    cur_x_sum += x[i + 1] - x[i];
            }
        }
        return area;
    }



	int32_t main(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	 #endif

		int t;
	//cin>>t; while(t--){


		int n,m,k;
		cin>>n>>m>>k;

		vector<vector<int>> a;
		for (int i = 0; i < k; ++i){
			int x,y;
			cin>>x>>y;

			vector<int> points(4);
			points[0] = x;
			points[1] = y;
			points[2] = n+1;
			points[3] = m+1;
			a.pb(points);
		}

		cout<<rectangleArea(a)<<"\n";

	//}

	}