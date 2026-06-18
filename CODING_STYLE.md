# ✍️ Coding Style Guide — Tyrant_Eye

This document describes the coding patterns, idioms, and conventions used across all solutions in this repository.
It is intended to give AI assistants (like Claude) or collaborators a precise understanding of how this person writes C++ for competitive programming.

---

## Language & Compiler

- **Primary language**: C++ (C++17)
- **Compiler flags used on LeetCode**: `-O2` by default; solutions sometimes add `#pragma GCC optimize("O3", "unroll-loops")` for tight time limits
- **Secondary languages**: Python3 (recursion-heavy or readability-first), SQL for database problems

---

## 1. File / Solution Structure

Every solution is a bare `class Solution { ... }` — no `#include` or `main()` since LeetCode injects those.
For DSU or helper classes, they are defined **above** `class Solution` in the same file.

```cpp
// helper defined above Solution when needed
class DSU { ... };

class Solution {
public:
    ReturnType functionName(params) {
        // body
    }
};
```

---

## 2. Fast I/O Boilerplate

Almost every non-trivial solution begins with or uses one of these patterns:

```cpp
// Inside the function:
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

// OR as a static initialiser at file scope (used on hard problems):
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return '$';
}();

// OR with comma operator at top of function:
ios_base::sync_with_stdio(0), cin.tie(0);
```

---

## 3. Macros

Defined at the top of files that reuse them:

```cpp
#define ll long long
#define vec vector<long long>
#define ld long double
#define loop(i, n) for (int i = 0; i < n; i++)
#define print(v) for (auto c : v) cout << c << " "
#define print_matrix(x) for(int i=0;i<x.size();i++){print(x[i]);cout<<endl;}
```

**Usage pattern**: `loop(i, n)` replaces `for(int i=0;i<n;i++)` in tight inner loops.
`ll` used whenever values can exceed `2^31`.

---

## 4. Spacing & Formatting

The style is **compact** — minimal spaces around operators, no blank lines between declarations:

```cpp
// Typical compact style:
unordered_map<int,int>mp;
for(int i=0;i<nums.size();i++){
    int to_find=target-nums[i];
    if(mp.find(to_find)!=mp.end()) return {mp[to_find],i};
    else mp[nums[i]]=i;
}

// Multi-condition while (split across lines for clarity):
while(left<right &&
      nums[left-1]==nums[left])
    left++;
```

Key points:
- No spaces around `<`, `>` in template types: `vector<int>v`, `unordered_map<int,int>mp`
- Braces on same line, else on same line as closing brace
- Short bodies may omit braces: `if(cond) return x;`

---

## 5. Variable Naming Conventions

| Variable | Meaning |
|----------|---------|
| `n`, `m` | row count, column count (grid problems) |
| `ans` | final answer / result accumulator |
| `mp` | `unordered_map` or `map` |
| `st` | `stack` |
| `st1` | second stack (when two stacks used simultaneously) |
| `left`, `right` | two-pointer indices |
| `i`, `j`, `k` | loop counters / indices |
| `to_find` | target value being searched |
| `index` | current DP index / recursion depth |
| `target` | DP target value or binary search goal |
| `pick`, `not_pick` | DP choices (include vs exclude current element) |

---

## 6. Infinity / Large Values

```cpp
int pick = 1e9;        // preferred over INT_MAX — safe to add without overflow
int ans  = 1e9;
// Never: int x = INT_MAX;  (risky in x+1 arithmetic)
```

---

## 7. Union-Find (DSU) — Canonical Implementation

Used for: Number of Islands (DSU variant), graph connectivity, redundant connections, etc.

```cpp
class DSU {
public:
    vector<long long> parent, size;
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int find(int node) {
        if (parent[node] == node) return node;
        return parent[node] = find(parent[node]);  // path compression
    }
    void union_size(int a, int b) {
        a = find(a); b = find(b);
        if (size[b] > size[a]) swap(a, b);
        if (b != a) {
            size[a] += size[b];
            parent[b] = a;
        }
    }
};
```

Grid index mapping: cell `(i, j)` in an `n×m` grid → flat index `i*m + j`.

---

## 8. Dynamic Programming Style

**Preferred**: Bottom-up 2D table. Recursion + memoisation used only when state space is irregular.

```cpp
// Coin change — typical DP table layout:
int dp[coins.size() + 2][amount + 1];
for (int i = 0; i < coins.size() + 1; i++) dp[i][0] = 0;
for (int i = 0; i <= amount; i++) dp[coins.size()][i] = 1e9;  // base: no coins left

for (int index = coins.size() - 1; index >= 0; index--) {
    for (int target = 1; target <= amount; target++) {
        int pick = 1e9, not_pick = 1e9;
        if (coins[index] <= target) pick = 1 + dp[index][target - coins[index]];
        not_pick = dp[index + 1][target];
        dp[index][target] = min(pick, not_pick);
    }
}
```

**Pattern**: Fill from last row upward (bottom-up), columns left to right.
State is `dp[item_index][remaining_capacity_or_target]`.

---

## 9. Sliding Window

Standard template with frequency-map counting:

```cpp
vector<int> freq(256, 0);   // covers all ASCII
int left = 0, right = 0;
int distinct = 0, satisfied = 0;

while (right < s.size()) {
    freq[s[right]]--;
    if (freq[s[right]] == 0) satisfied++;
    while (satisfied == distinct) {
        // update answer
        freq[s[left]]++;
        if (freq[s[left]] == 1) satisfied--;
        left++;
    }
    right++;
}
```

---

## 10. Two Pointers

```cpp
sort(nums.begin(), nums.end());
int left = i + 1, right = n - 1;
while (left < right) {
    int sum = nums[i] + nums[left] + nums[right];
    if (sum == 0) {
        // found
        left++; right--;
        while (left < right && nums[left] == nums[left - 1]) left++;   // skip dupes
        while (left < right && nums[right] == nums[right + 1]) right--;
    } else if (sum > 0) right--;
    else left++;
}
```

Always sort first. Duplicate skipping done inline with while loops.

---

## 11. Monotonic Stack

Both left-boundary and right-boundary computed in a single reverse pass using two stacks:

```cpp
stack<int> st, st1;
vector<int> min_left(n, -1), min_right(n, n);

for (int i = n - 1; i >= 0; i--) {
    // right boundary: st
    while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
    if (!st.empty()) min_right[i] = st.top();
    st.push(i);

    // left boundary: st1 (processing from left side simultaneously)
    while (!st1.empty() && heights[st1.top()] >= heights[n-1-i]) st1.pop();
    if (!st1.empty()) min_left[n-1-i] = st1.top();
    st1.push(n-1-i);
}
```

---

## 12. Graph Traversal

**BFS**: `queue<int>`, level-order, shortest path.
**DFS**: recursive, with `visited` bool array or in-place mutation (e.g., mark `grid[i][j] = '0'`).

```cpp
// DFS for islands — in-place mutation
void dfs(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1') return;
    grid[i][j] = '0';
    dfs(grid, i+1, j); dfs(grid, i-1, j);
    dfs(grid, i, j+1); dfs(grid, i, j-1);
}
```

Direction vectors: `vector<pair<int,int>> move = {{0,1},{0,-1},{1,0},{-1,0}};` — named `move` or `moves`.

---

## 13. Backtracking

```cpp
void solve(int index, vector<vector<string>>& ans, vector<string>& board, int n) {
    if (index == n) { ans.push_back(board); return; }
    for (int i = 0; i < n; i++) {
        if (isSafe(index, i, board)) {
            board[index][i] = 'Q';
            solve(index + 1, ans, board, n);
            board[index][i] = '.';   // backtrack
        }
    }
}
```

Pattern: place → recurse → undo. Safety check extracted to helper `isSafe` / `issafe`.

---

## 14. Binary Search

```cpp
int lo = 0, hi = max_val;
while (lo < hi) {
    int mid = lo + (hi - lo) / 2;
    if (feasible(mid)) hi = mid;
    else lo = mid + 1;
}
// answer is lo
```

Used for: "minimum maximum", "maximum minimum", capacity/bouquet problems.

---

## 15. What to Expect When Generating Code in This Style

When generating or continuing solutions for Tyrant_Eye:
1. Use C++ with the compact spacing shown above — no extra spaces around `<>` in templates.
2. Prefer `int ans = 0` + accumulation over constructing a result vector then returning.
3. Use `1e9` not `INT_MAX`.
4. For graph grid problems, define `is_valid()` or guard inline; use flat index `i*m+j`.
5. For DP, default to bottom-up table; name choices `pick`/`not_pick`.
6. Do not add `#include` or `using namespace std;` — LeetCode provides those.
7. Do not add explanatory comments unless asked — the code speaks through naming and structure.
8. Keep variable names short and consistent with the conventions table above.

---

*Generated from analysis of 359 accepted LeetCode submissions.*
