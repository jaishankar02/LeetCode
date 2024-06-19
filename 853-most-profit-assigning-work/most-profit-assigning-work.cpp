struct CustomComparator {
    bool operator()(const std::pair<int, int>& a,
                    const std::pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second < b.second; // Max-heap for the second value
        } else {
            return a.first < b.first; // Max-heap for the first value if second
                                      // values are equal
        }
    }
};
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,vector<int>& worker) {
        priority_queue<pair<int, int>,vector<pair<int,int>>,CustomComparator> pq;
        for (int i = 0; i < profit.size(); i++) {
            pq.push(make_pair(difficulty[i], profit[i]));
        }
        sort(worker.begin(), worker.end());
        int ans = 0;
        int n = worker.size();
        int i = n - 1;
        while (i >= 0 && !pq.empty()) {
            if (worker[i] < pq.top().first) {
                pq.pop();
            } else {
                cout << pq.top().second << endl;
                ans += pq.top().second;
                i--;
            }
        }
        return ans;
    }
};