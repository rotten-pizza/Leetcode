# 🧠 LeetCode Solutions — Tyrant_Eye

> **359 accepted solutions** across Easy, Medium, and Hard problems, solved primarily in **C++** with a competitive-programming style.
> Profile: [leetcode.com/u/Tyrant\_Eye](https://leetcode.com/u/Tyrant_Eye/)

---

## 📊 Stats at a Glance

### By Difficulty

| Difficulty | Count | Bar |
|------------|-------|-----|
| 🟢 Easy | **129** | `█████████████████████████` |
| 🟡 Medium | **196** | `███████████████████████████████████████` |
| 🔴 Hard | **34** | `██████` |

### By Language

| Language | Count |
|----------|-------|
| C++ | 343 |
| SQL | 15 |
| Python3 | 1 |

### By Topic (click to jump)

| Topic | Count |
|-------|-------|
| 🌿 [Trie](#trie) | 4 |
| 🏔️ [Heap / Priority Queue](#heap) | 15 |
| 🔄 [Backtracking](#backtracking) | 22 |
| 💡 [Dynamic Programming](#dynamic-programming) | 52 |
| 🕸️ [Graphs](#graphs) | 50 |
| 🌳 [Trees](#trees) | 6 |
| 🪟 [Sliding Window](#sliding-window) | 8 |
| 🔍 [Binary Search](#binary-search) | 27 |
| 👈👉 [Two Pointers](#two-pointers) | 29 |
| 📚 [Stack & Queue](#stack-queue) | 8 |
| 🔗 [Linked Lists](#linked-lists) | 6 |
| 💰 [Greedy](#greedy) | 14 |
| ⚙️ [Bit Manipulation](#bit-manipulation) | 15 |
| ➗ [Math](#math) | 38 |
| 🔤 [Strings](#strings) | 15 |
| 📦 [Arrays & Hashing](#arrays-hashing) | 34 |
| 🗄️ [SQL / Database](#sql) | 15 |
| 📁 [Miscellaneous](#miscellaneous) | 1 |

---

## 🗂️ Repository Structure

```
leetcode-portfolio/
├── README.md
├── CODING_STYLE.md
├── trie/   (4 problems)
├── heap/   (15 problems)
├── backtracking/   (22 problems)
├── dynamic-programming/   (52 problems)
├── graphs/   (50 problems)
├── trees/   (6 problems)
├── sliding-window/   (8 problems)
├── binary-search/   (27 problems)
├── two-pointers/   (29 problems)
├── stack-queue/   (8 problems)
├── linked-lists/   (6 problems)
├── greedy/   (14 problems)
├── bit-manipulation/   (15 problems)
├── math/   (38 problems)
├── strings/   (15 problems)
├── arrays-hashing/   (34 problems)
├── sql/   (15 problems)
├── miscellaneous/   (1 problems)
```

Each file is named `<id>-<title-slug>.<ext>` so it sorts numerically and links unambiguously back to LeetCode.

---

## ✍️ Coding Style (Summary)

- **Language**: C++ (95%), occasional Python3 and SQL
- **Paradigm**: Competitive programming — concise, no boilerplate, optimised for correctness and speed
- **Fast I/O**: `ios_base::sync_with_stdio(false); cin.tie(nullptr)` on almost every solution
- **Common macros**: `#define ll long long`, `#define loop(i,n) for(int i=0;i<n;i++)`
- **DSU**: Hand-rolled Union-Find class with path compression + union-by-size, reused across graph problems
- **DP style**: Bottom-up 2D table (`dp[index][target]`), avoids recursion + memoisation unless necessary
- **Infinity sentinel**: `1e9` instead of `INT_MAX` to avoid overflow when adding
- **Naming**: Short & clear — `ans`, `left`/`right`, `mp` (map), `st` (stack), `n`/`m` for grid dims
- **Performance**: `#pragma GCC optimize("O3", "unroll-loops")` added on tight Hard problems

See [`CODING_STYLE.md`](CODING_STYLE.md) for a full breakdown with annotated examples.

---

## 📚 Problems by Topic

### 🌿 Trie <a name="trie"></a>

**4 problems** — 🟢 Easy 1 · 🟡 Medium 3

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | 🟢 Easy | Array, String, Trie | C++ | [14-longest-common-prefix.cpp](trie/14-longest-common-prefix.cpp) |
| 139 | [Word Break](https://leetcode.com/problems/word-break/) | 🟡 Medium | Array, Hash Table, String… | C++ | [139-word-break.cpp](trie/139-word-break.cpp) |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | 🟡 Medium | Hash Table, String, Design… | C++ | [208-implement-trie-prefix-tree.cpp](trie/208-implement-trie-prefix-tree.cpp) |
| 1023 | [Camelcase Matching](https://leetcode.com/problems/camelcase-matching/) | 🟡 Medium | Array, Two Pointers, String… | C++ | [1023-camelcase-matching.cpp](trie/1023-camelcase-matching.cpp) |

---

### 🏔️ Heap / Priority Queue <a name="heap"></a>

**15 problems** — 🟡 Medium 10 · 🔴 Hard 5

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 23 | [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) | 🔴 Hard | Linked List, Divide and Conquer, Heap (Priority Queue)… | C++ | [23-merge-k-sorted-lists.cpp](heap/23-merge-k-sorted-lists.cpp) |
| 215 | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | 🟡 Medium | Array, Divide and Conquer, Sorting… | C++ | [215-kth-largest-element-in-an-array.cpp](heap/215-kth-largest-element-in-an-array.cpp) |
| 239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | 🔴 Hard | Array, Queue, Sliding Window… | C++ | [239-sliding-window-maximum.cpp](heap/239-sliding-window-maximum.cpp) |
| 295 | [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) | 🔴 Hard | Two Pointers, Design, Sorting… | C++ | [295-find-median-from-data-stream.cpp](heap/295-find-median-from-data-stream.cpp) |
| 332 | [Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/) | 🔴 Hard | Array, String, Depth-First Search… | C++ | [332-reconstruct-itinerary.cpp](heap/332-reconstruct-itinerary.cpp) |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | 🟡 Medium | Array, Hash Table, Divide and Conquer… | C++ | [347-top-k-frequent-elements.cpp](heap/347-top-k-frequent-elements.cpp) |
| 378 | [Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | 🟡 Medium | Array, Binary Search, Sorting… | C++ | [378-kth-smallest-element-in-a-sorted-matrix.cpp](heap/378-kth-smallest-element-in-a-sorted-matrix.cpp) |
| 451 | [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | 🟡 Medium | Hash Table, String, Sorting… | C++ | [451-sort-characters-by-frequency.cpp](heap/451-sort-characters-by-frequency.cpp) |
| 658 | [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/) | 🟡 Medium | Array, Two Pointers, Binary Search… | C++ | [658-find-k-closest-elements.cpp](heap/658-find-k-closest-elements.cpp) |
| 743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Graph Theory… | C++ | [743-network-delay-time.cpp](heap/743-network-delay-time.cpp) |
| 778 | [Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/) | 🔴 Hard | Array, Binary Search, Depth-First Search… | C++ | [778-swim-in-rising-water.cpp](heap/778-swim-in-rising-water.cpp) |
| 786 | [K-th Smallest Prime Fraction](https://leetcode.com/problems/k-th-smallest-prime-fraction/) | 🟡 Medium | Array, Two Pointers, Binary Search… | C++ | [786-k-th-smallest-prime-fraction.cpp](heap/786-k-th-smallest-prime-fraction.cpp) |
| 787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | 🟡 Medium | Dynamic Programming, Depth-First Search, Breadth-First Search… | C++ | [787-cheapest-flights-within-k-stops.cpp](heap/787-cheapest-flights-within-k-stops.cpp) |
| 973 | [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) | 🟡 Medium | Array, Math, Divide and Conquer… | C++ | [973-k-closest-points-to-origin.cpp](heap/973-k-closest-points-to-origin.cpp) |
| 1405 | [Longest Happy String](https://leetcode.com/problems/longest-happy-string/) | 🟡 Medium | String, Greedy, Heap (Priority Queue) | C++ | [1405-longest-happy-string.cpp](heap/1405-longest-happy-string.cpp) |

---

### 🔄 Backtracking <a name="backtracking"></a>

**22 problems** — 🟡 Medium 18 · 🔴 Hard 4

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 17 | [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | 🟡 Medium | Hash Table, String, Backtracking | C++ | [17-letter-combinations-of-a-phone-number.cpp](backtracking/17-letter-combinations-of-a-phone-number.cpp) |
| 22 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | 🟡 Medium | String, Dynamic Programming, Backtracking | C++ | [22-generate-parentheses.cpp](backtracking/22-generate-parentheses.cpp) |
| 37 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | 🔴 Hard | Array, Hash Table, Backtracking… | C++ | [37-sudoku-solver.cpp](backtracking/37-sudoku-solver.cpp) |
| 39 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | 🟡 Medium | Array, Backtracking | C++ | [39-combination-sum.cpp](backtracking/39-combination-sum.cpp) |
| 40 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | 🟡 Medium | Array, Backtracking | C++ | [40-combination-sum-ii.cpp](backtracking/40-combination-sum-ii.cpp) |
| 46 | [Permutations](https://leetcode.com/problems/permutations/) | 🟡 Medium | Array, Backtracking | C++ | [46-permutations.cpp](backtracking/46-permutations.cpp) |
| 51 | [N-Queens](https://leetcode.com/problems/n-queens/) | 🔴 Hard | Array, Backtracking | C++ | [51-n-queens.cpp](backtracking/51-n-queens.cpp) |
| 52 | [N-Queens II](https://leetcode.com/problems/n-queens-ii/) | 🔴 Hard | Backtracking | C++ | [52-n-queens-ii.cpp](backtracking/52-n-queens-ii.cpp) |
| 78 | [Subsets](https://leetcode.com/problems/subsets/) | 🟡 Medium | Array, Backtracking, Bit Manipulation | C++ | [78-subsets.cpp](backtracking/78-subsets.cpp) |
| 79 | [Word Search](https://leetcode.com/problems/word-search/) | 🟡 Medium | Array, String, Backtracking… | C++ | [79-word-search.cpp](backtracking/79-word-search.cpp) |
| 90 | [Subsets II](https://leetcode.com/problems/subsets-ii/) | 🟡 Medium | Array, Backtracking, Bit Manipulation | C++ | [90-subsets-ii.cpp](backtracking/90-subsets-ii.cpp) |
| 113 | [Path Sum II](https://leetcode.com/problems/path-sum-ii/) | 🟡 Medium | Backtracking, Tree, Depth-First Search… | C++ | [113-path-sum-ii.cpp](backtracking/113-path-sum-ii.cpp) |
| 131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | 🟡 Medium | String, Dynamic Programming, Backtracking | C++ | [131-palindrome-partitioning.cpp](backtracking/131-palindrome-partitioning.cpp) |
| 216 | [Combination Sum III](https://leetcode.com/problems/combination-sum-iii/) | 🟡 Medium | Array, Backtracking | C++ | [216-combination-sum-iii.cpp](backtracking/216-combination-sum-iii.cpp) |
| 357 | [Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/) | 🟡 Medium | Math, Dynamic Programming, Backtracking | C++ | [357-count-numbers-with-unique-digits.cpp](backtracking/357-count-numbers-with-unique-digits.cpp) |
| 473 | [Matchsticks to Square](https://leetcode.com/problems/matchsticks-to-square/) | 🟡 Medium | Array, Dynamic Programming, Backtracking… | C++ | [473-matchsticks-to-square.cpp](backtracking/473-matchsticks-to-square.cpp) |
| 494 | [Target Sum](https://leetcode.com/problems/target-sum/) | 🟡 Medium | Array, Dynamic Programming, Backtracking | C++ | [494-target-sum.cpp](backtracking/494-target-sum.cpp) |
| 773 | [Sliding Puzzle](https://leetcode.com/problems/sliding-puzzle/) | 🔴 Hard | Array, Dynamic Programming, Backtracking… | C++ | [773-sliding-puzzle.cpp](backtracking/773-sliding-puzzle.cpp) |
| 784 | [Letter Case Permutation](https://leetcode.com/problems/letter-case-permutation/) | 🟡 Medium | String, Backtracking, Bit Manipulation | C++ | [784-letter-case-permutation.cpp](backtracking/784-letter-case-permutation.cpp) |
| 949 | [Largest Time for Given Digits](https://leetcode.com/problems/largest-time-for-given-digits/) | 🟡 Medium | Array, String, Backtracking… | C++ | [949-largest-time-for-given-digits.cpp](backtracking/949-largest-time-for-given-digits.cpp) |
| 1079 | [Letter Tile Possibilities](https://leetcode.com/problems/letter-tile-possibilities/) | 🟡 Medium | Hash Table, String, Backtracking… | C++ | [1079-letter-tile-possibilities.cpp](backtracking/1079-letter-tile-possibilities.cpp) |
| 1219 | [Path with Maximum Gold](https://leetcode.com/problems/path-with-maximum-gold/) | 🟡 Medium | Array, Backtracking, Matrix | C++ | [1219-path-with-maximum-gold.cpp](backtracking/1219-path-with-maximum-gold.cpp) |

---

### 💡 Dynamic Programming <a name="dynamic-programming"></a>

**52 problems** — 🟢 Easy 8 · 🟡 Medium 34 · 🔴 Hard 10

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | 🔴 Hard | Array, Two Pointers, Dynamic Programming… | C++ | [42-trapping-rain-water.cpp](dynamic-programming/42-trapping-rain-water.cpp) |
| 45 | [Jump Game II](https://leetcode.com/problems/jump-game-ii/) | 🟡 Medium | Array, Dynamic Programming, Greedy | C++ | [45-jump-game-ii.cpp](dynamic-programming/45-jump-game-ii.cpp) |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | 🟡 Medium | Array, Divide and Conquer, Dynamic Programming | C++ | [53-maximum-subarray.cpp](dynamic-programming/53-maximum-subarray.cpp) |
| 55 | [Jump Game](https://leetcode.com/problems/jump-game/) | 🟡 Medium | Array, Dynamic Programming, Greedy | C++ | [55-jump-game.cpp](dynamic-programming/55-jump-game.cpp) |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | 🟡 Medium | Math, Dynamic Programming, Combinatorics | C++ | [62-unique-paths.cpp](dynamic-programming/62-unique-paths.cpp) |
| 63 | [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | 🟡 Medium | Array, Dynamic Programming, Matrix | C++ | [63-unique-paths-ii.cpp](dynamic-programming/63-unique-paths-ii.cpp) |
| 64 | [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) | 🟡 Medium | Array, Dynamic Programming, Matrix | C++ | [64-minimum-path-sum.cpp](dynamic-programming/64-minimum-path-sum.cpp) |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | 🟢 Easy | Math, Dynamic Programming, Memoization | C++ | [70-climbing-stairs.cpp](dynamic-programming/70-climbing-stairs.cpp) |
| 72 | [Edit Distance](https://leetcode.com/problems/edit-distance/) | 🟡 Medium | String, Dynamic Programming | C++ | [72-edit-distance.cpp](dynamic-programming/72-edit-distance.cpp) |
| 85 | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) | 🔴 Hard | Array, Dynamic Programming, Stack… | C++ | [85-maximal-rectangle.cpp](dynamic-programming/85-maximal-rectangle.cpp) |
| 97 | [Interleaving String](https://leetcode.com/problems/interleaving-string/) | 🟡 Medium | String, Dynamic Programming | C++ | [97-interleaving-string.cpp](dynamic-programming/97-interleaving-string.cpp) |
| 115 | [Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/) | 🔴 Hard | String, Dynamic Programming | C++ | [115-distinct-subsequences.cpp](dynamic-programming/115-distinct-subsequences.cpp) |
| 118 | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | 🟢 Easy | Array, Dynamic Programming | C++ | [118-pascals-triangle.cpp](dynamic-programming/118-pascals-triangle.cpp) |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | 🟢 Easy | Array, Dynamic Programming | C++ | [121-best-time-to-buy-and-sell-stock.cpp](dynamic-programming/121-best-time-to-buy-and-sell-stock.cpp) |
| 124 | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | 🔴 Hard | Dynamic Programming, Tree, Depth-First Search… | C++ | [124-binary-tree-maximum-path-sum.cpp](dynamic-programming/124-binary-tree-maximum-path-sum.cpp) |
| 132 | [Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/) | 🔴 Hard | String, Dynamic Programming | C++ | [132-palindrome-partitioning-ii.cpp](dynamic-programming/132-palindrome-partitioning-ii.cpp) |
| 152 | [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/) | 🟡 Medium | Array, Dynamic Programming | C++ | [152-maximum-product-subarray.cpp](dynamic-programming/152-maximum-product-subarray.cpp) |
| 198 | [House Robber](https://leetcode.com/problems/house-robber/) | 🟡 Medium | Array, Dynamic Programming | C++ | [198-house-robber.cpp](dynamic-programming/198-house-robber.cpp) |
| 300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | 🟡 Medium | Array, Binary Search, Dynamic Programming | C++ | [300-longest-increasing-subsequence.cpp](dynamic-programming/300-longest-increasing-subsequence.cpp) |
| 312 | [Burst Balloons](https://leetcode.com/problems/burst-balloons/) | 🔴 Hard | Array, Dynamic Programming | C++ | [312-burst-balloons.cpp](dynamic-programming/312-burst-balloons.cpp) |
| 322 | [Coin Change](https://leetcode.com/problems/coin-change/) | 🟡 Medium | Array, Dynamic Programming, Breadth-First Search | C++ | [322-coin-change.cpp](dynamic-programming/322-coin-change.cpp) |
| 337 | [House Robber III](https://leetcode.com/problems/house-robber-iii/) | 🟡 Medium | Dynamic Programming, Tree, Depth-First Search… | C++ | [337-house-robber-iii.cpp](dynamic-programming/337-house-robber-iii.cpp) |
| 338 | [Counting Bits](https://leetcode.com/problems/counting-bits/) | 🟢 Easy | Dynamic Programming, Bit Manipulation | C++ | [338-counting-bits.cpp](dynamic-programming/338-counting-bits.cpp) |
| 343 | [Integer Break](https://leetcode.com/problems/integer-break/) | 🟡 Medium | Math, Dynamic Programming | C++ | [343-integer-break.cpp](dynamic-programming/343-integer-break.cpp) |
| 354 | [Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/) | 🔴 Hard | Array, Binary Search, Dynamic Programming… | C++ | [354-russian-doll-envelopes.cpp](dynamic-programming/354-russian-doll-envelopes.cpp) |
| 392 | [Is Subsequence](https://leetcode.com/problems/is-subsequence/) | 🟢 Easy | Two Pointers, String, Dynamic Programming | C++ | [392-is-subsequence.cpp](dynamic-programming/392-is-subsequence.cpp) |
| 410 | [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/) | 🔴 Hard | Array, Binary Search, Dynamic Programming… | C++ | [410-split-array-largest-sum.cpp](dynamic-programming/410-split-array-largest-sum.cpp) |
| 416 | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | 🟡 Medium | Array, Dynamic Programming | C++ | [416-partition-equal-subset-sum.cpp](dynamic-programming/416-partition-equal-subset-sum.cpp) |
| 435 | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) | 🟡 Medium | Array, Dynamic Programming, Greedy… | C++ | [435-non-overlapping-intervals.cpp](dynamic-programming/435-non-overlapping-intervals.cpp) |
| 474 | [Ones and Zeroes](https://leetcode.com/problems/ones-and-zeroes/) | 🟡 Medium | Array, String, Dynamic Programming | C++ | [474-ones-and-zeroes.cpp](dynamic-programming/474-ones-and-zeroes.cpp) |
| 486 | [Predict the Winner](https://leetcode.com/problems/predict-the-winner/) | 🟡 Medium | Array, Math, Dynamic Programming… | C++ | [486-predict-the-winner.cpp](dynamic-programming/486-predict-the-winner.cpp) |
| 516 | [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | 🟡 Medium | String, Dynamic Programming | C++ | [516-longest-palindromic-subsequence.cpp](dynamic-programming/516-longest-palindromic-subsequence.cpp) |
| 518 | [Coin Change II](https://leetcode.com/problems/coin-change-ii/) | 🟡 Medium | Array, Dynamic Programming | C++ | [518-coin-change-ii.cpp](dynamic-programming/518-coin-change-ii.cpp) |
| 542 | [01 Matrix](https://leetcode.com/problems/01-matrix/) | 🟡 Medium | Array, Dynamic Programming, Breadth-First Search… | C++ | [542-01-matrix.cpp](dynamic-programming/542-01-matrix.cpp) |
| 576 | [Out of Boundary Paths](https://leetcode.com/problems/out-of-boundary-paths/) | 🟡 Medium | Dynamic Programming | C++ | [576-out-of-boundary-paths.cpp](dynamic-programming/576-out-of-boundary-paths.cpp) |
| 583 | [Delete Operation for Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/) | 🟡 Medium | String, Dynamic Programming | C++ | [583-delete-operation-for-two-strings.cpp](dynamic-programming/583-delete-operation-for-two-strings.cpp) |
| 650 | [2 Keys Keyboard](https://leetcode.com/problems/2-keys-keyboard/) | 🟡 Medium | Math, Dynamic Programming | C++ | [650-2-keys-keyboard.cpp](dynamic-programming/650-2-keys-keyboard.cpp) |
| 688 | [Knight Probability in Chessboard](https://leetcode.com/problems/knight-probability-in-chessboard/) | 🟡 Medium | Dynamic Programming | C++ | [688-knight-probability-in-chessboard.cpp](dynamic-programming/688-knight-probability-in-chessboard.cpp) |
| 746 | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/) | 🟢 Easy | Array, Dynamic Programming | C++ | [746-min-cost-climbing-stairs.cpp](dynamic-programming/746-min-cost-climbing-stairs.cpp) |
| 983 | [Minimum Cost For Tickets](https://leetcode.com/problems/minimum-cost-for-tickets/) | 🟡 Medium | Array, Dynamic Programming | C++ | [983-minimum-cost-for-tickets.cpp](dynamic-programming/983-minimum-cost-for-tickets.cpp) |
| 1025 | [Divisor Game](https://leetcode.com/problems/divisor-game/) | 🟢 Easy | Math, Dynamic Programming, Brainteaser… | C++ | [1025-divisor-game.cpp](dynamic-programming/1025-divisor-game.cpp) |
| 1043 | [Partition Array for Maximum Sum](https://leetcode.com/problems/partition-array-for-maximum-sum/) | 🟡 Medium | Array, Dynamic Programming | C++ | [1043-partition-array-for-maximum-sum.cpp](dynamic-programming/1043-partition-array-for-maximum-sum.cpp) |
| 1092 | [Shortest Common Supersequence ](https://leetcode.com/problems/shortest-common-supersequence/) | 🔴 Hard | String, Dynamic Programming | C++ | [1092-shortest-common-supersequence.cpp](dynamic-programming/1092-shortest-common-supersequence.cpp) |
| 1137 | [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/) | 🟢 Easy | Math, Dynamic Programming, Memoization | C++ | [1137-n-th-tribonacci-number.cpp](dynamic-programming/1137-n-th-tribonacci-number.cpp) |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | 🟡 Medium | String, Dynamic Programming | Python3 | [1143-longest-common-subsequence.py](dynamic-programming/1143-longest-common-subsequence.py) |
| 1162 | [As Far from Land as Possible](https://leetcode.com/problems/as-far-from-land-as-possible/) | 🟡 Medium | Array, Dynamic Programming, Breadth-First Search… | C++ | [1162-as-far-from-land-as-possible.cpp](dynamic-programming/1162-as-far-from-land-as-possible.cpp) |
| 1218 | [Longest Arithmetic Subsequence of Given Difference](https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/) | 🟡 Medium | Array, Hash Table, Dynamic Programming | C++ | [1218-longest-arithmetic-subsequence-of-given-difference.cpp](dynamic-programming/1218-longest-arithmetic-subsequence-of-given-difference.cpp) |
| 1334 | [Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) | 🟡 Medium | Dynamic Programming, Graph Theory, Shortest Path | C++ | [1334-find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance.cpp](dynamic-programming/1334-find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance.cpp) |
| 1547 | [Minimum Cost to Cut a Stick](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/) | 🔴 Hard | Array, Dynamic Programming, Sorting | C++ | [1547-minimum-cost-to-cut-a-stick.cpp](dynamic-programming/1547-minimum-cost-to-cut-a-stick.cpp) |
| 1626 | [Best Team With No Conflicts](https://leetcode.com/problems/best-team-with-no-conflicts/) | 🟡 Medium | Array, Dynamic Programming, Sorting | C++ | [1626-best-team-with-no-conflicts.cpp](dynamic-programming/1626-best-team-with-no-conflicts.cpp) |
| 1976 | [Number of Ways to Arrive at Destination](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/) | 🟡 Medium | Dynamic Programming, Graph Theory, Topological Sort… | C++ | [1976-number-of-ways-to-arrive-at-destination.cpp](dynamic-programming/1976-number-of-ways-to-arrive-at-destination.cpp) |
| 2008 | [Maximum Earnings From Taxi](https://leetcode.com/problems/maximum-earnings-from-taxi/) | 🟡 Medium | Array, Hash Table, Binary Search… | C++ | [2008-maximum-earnings-from-taxi.cpp](dynamic-programming/2008-maximum-earnings-from-taxi.cpp) |

---

### 🕸️ Graphs <a name="graphs"></a>

**50 problems** — 🟢 Easy 13 · 🟡 Medium 30 · 🔴 Hard 7

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | 🟢 Easy | Stack, Tree, Depth-First Search… | C++ | [94-binary-tree-inorder-traversal.cpp](graphs/94-binary-tree-inorder-traversal.cpp) |
| 98 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) | 🟡 Medium | Tree, Depth-First Search, Binary Search Tree… | C++ | [98-validate-binary-search-tree.cpp](graphs/98-validate-binary-search-tree.cpp) |
| 100 | [Same Tree](https://leetcode.com/problems/same-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [100-same-tree.cpp](graphs/100-same-tree.cpp) |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [101-symmetric-tree.cpp](graphs/101-symmetric-tree.cpp) |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | 🟡 Medium | Tree, Breadth-First Search, Binary Tree | C++ | [102-binary-tree-level-order-traversal.cpp](graphs/102-binary-tree-level-order-traversal.cpp) |
| 103 | [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | 🟡 Medium | Tree, Breadth-First Search, Binary Tree | C++ | [103-binary-tree-zigzag-level-order-traversal.cpp](graphs/103-binary-tree-zigzag-level-order-traversal.cpp) |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [104-maximum-depth-of-binary-tree.cpp](graphs/104-maximum-depth-of-binary-tree.cpp) |
| 110 | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/) | 🟢 Easy | Tree, Depth-First Search, Binary Tree | C++ | [110-balanced-binary-tree.cpp](graphs/110-balanced-binary-tree.cpp) |
| 111 | [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [111-minimum-depth-of-binary-tree.cpp](graphs/111-minimum-depth-of-binary-tree.cpp) |
| 127 | [Word Ladder](https://leetcode.com/problems/word-ladder/) | 🔴 Hard | Hash Table, String, Breadth-First Search | C++ | [127-word-ladder.cpp](graphs/127-word-ladder.cpp) |
| 129 | [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/) | 🟡 Medium | Tree, Depth-First Search, Binary Tree | C++ | [129-sum-root-to-leaf-numbers.cpp](graphs/129-sum-root-to-leaf-numbers.cpp) |
| 130 | [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [130-surrounded-regions.cpp](graphs/130-surrounded-regions.cpp) |
| 144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | 🟢 Easy | Stack, Tree, Depth-First Search… | C++ | [144-binary-tree-preorder-traversal.cpp](graphs/144-binary-tree-preorder-traversal.cpp) |
| 200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [200-number-of-islands.cpp](graphs/200-number-of-islands.cpp) |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Graph Theory… | C++ | [210-course-schedule-ii.cpp](graphs/210-course-schedule-ii.cpp) |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [226-invert-binary-tree.cpp](graphs/226-invert-binary-tree.cpp) |
| 230 | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | 🟡 Medium | Tree, Depth-First Search, Binary Search Tree… | C++ | [230-kth-smallest-element-in-a-bst.cpp](graphs/230-kth-smallest-element-in-a-bst.cpp) |
| 235 | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | 🟡 Medium | Tree, Depth-First Search, Binary Search Tree… | C++ | [235-lowest-common-ancestor-of-a-binary-search-tree.cpp](graphs/235-lowest-common-ancestor-of-a-binary-search-tree.cpp) |
| 236 | [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | 🟡 Medium | Tree, Depth-First Search, Binary Tree | C++ | [236-lowest-common-ancestor-of-a-binary-tree.cpp](graphs/236-lowest-common-ancestor-of-a-binary-tree.cpp) |
| 297 | [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | 🔴 Hard | String, Tree, Depth-First Search… | C++ | [297-serialize-and-deserialize-binary-tree.cpp](graphs/297-serialize-and-deserialize-binary-tree.cpp) |
| 399 | [Evaluate Division](https://leetcode.com/problems/evaluate-division/) | 🟡 Medium | Array, String, Depth-First Search… | C++ | [399-evaluate-division.cpp](graphs/399-evaluate-division.cpp) |
| 404 | [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [404-sum-of-left-leaves.cpp](graphs/404-sum-of-left-leaves.cpp) |
| 463 | [Island Perimeter](https://leetcode.com/problems/island-perimeter/) | 🟢 Easy | Array, Depth-First Search, Breadth-First Search… | C++ | [463-island-perimeter.cpp](graphs/463-island-perimeter.cpp) |
| 547 | [Number of Provinces](https://leetcode.com/problems/number-of-provinces/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Union-Find… | C++ | [547-number-of-provinces.cpp](graphs/547-number-of-provinces.cpp) |
| 637 | [Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/) | 🟢 Easy | Tree, Depth-First Search, Breadth-First Search… | C++ | [637-average-of-levels-in-binary-tree.cpp](graphs/637-average-of-levels-in-binary-tree.cpp) |
| 653 | [Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/) | 🟢 Easy | Hash Table, Two Pointers, Tree… | C++ | [653-two-sum-iv-input-is-a-bst.cpp](graphs/653-two-sum-iv-input-is-a-bst.cpp) |
| 684 | [Redundant Connection](https://leetcode.com/problems/redundant-connection/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Union-Find… | C++ | [684-redundant-connection.cpp](graphs/684-redundant-connection.cpp) |
| 695 | [Max Area of Island](https://leetcode.com/problems/max-area-of-island/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [695-max-area-of-island.cpp](graphs/695-max-area-of-island.cpp) |
| 733 | [Flood Fill](https://leetcode.com/problems/flood-fill/) | 🟢 Easy | Array, Depth-First Search, Breadth-First Search… | C++ | [733-flood-fill.cpp](graphs/733-flood-fill.cpp) |
| 785 | [Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Union-Find… | C++ | [785-is-graph-bipartite.cpp](graphs/785-is-graph-bipartite.cpp) |
| 802 | [Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Graph Theory… | C++ | [802-find-eventual-safe-states.cpp](graphs/802-find-eventual-safe-states.cpp) |
| 815 | [Bus Routes](https://leetcode.com/problems/bus-routes/) | 🔴 Hard | Array, Hash Table, Breadth-First Search | C++ | [815-bus-routes.cpp](graphs/815-bus-routes.cpp) |
| 827 | [Making A Large Island](https://leetcode.com/problems/making-a-large-island/) | 🔴 Hard | Array, Depth-First Search, Breadth-First Search… | C++ | [827-making-a-large-island.cpp](graphs/827-making-a-large-island.cpp) |
| 863 | [All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/) | 🟡 Medium | Hash Table, Tree, Depth-First Search… | C++ | [863-all-nodes-distance-k-in-binary-tree.cpp](graphs/863-all-nodes-distance-k-in-binary-tree.cpp) |
| 924 | [Minimize Malware Spread](https://leetcode.com/problems/minimize-malware-spread/) | 🔴 Hard | Array, Hash Table, Depth-First Search… | C++ | [924-minimize-malware-spread.cpp](graphs/924-minimize-malware-spread.cpp) |
| 934 | [Shortest Bridge](https://leetcode.com/problems/shortest-bridge/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [934-shortest-bridge.cpp](graphs/934-shortest-bridge.cpp) |
| 947 | [Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/) | 🟡 Medium | Hash Table, Depth-First Search, Union-Find… | C++ | [947-most-stones-removed-with-same-row-or-column.cpp](graphs/947-most-stones-removed-with-same-row-or-column.cpp) |
| 959 | [Regions Cut By Slashes](https://leetcode.com/problems/regions-cut-by-slashes/) | 🟡 Medium | Array, Hash Table, Depth-First Search… | C++ | [959-regions-cut-by-slashes.cpp](graphs/959-regions-cut-by-slashes.cpp) |
| 987 | [Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/) | 🔴 Hard | Hash Table, Tree, Depth-First Search… | C++ | [987-vertical-order-traversal-of-a-binary-tree.cpp](graphs/987-vertical-order-traversal-of-a-binary-tree.cpp) |
| 994 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) | 🟡 Medium | Array, Breadth-First Search, Matrix | C++ | [994-rotting-oranges.cpp](graphs/994-rotting-oranges.cpp) |
| 1020 | [Number of Enclaves](https://leetcode.com/problems/number-of-enclaves/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [1020-number-of-enclaves.cpp](graphs/1020-number-of-enclaves.cpp) |
| 1034 | [Coloring A Border](https://leetcode.com/problems/coloring-a-border/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search… | C++ | [1034-coloring-a-border.cpp](graphs/1034-coloring-a-border.cpp) |
| 1042 | [Flower Planting With No Adjacent](https://leetcode.com/problems/flower-planting-with-no-adjacent/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Graph Theory | C++ | [1042-flower-planting-with-no-adjacent.cpp](graphs/1042-flower-planting-with-no-adjacent.cpp) |
| 1091 | [Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | 🟡 Medium | Array, Breadth-First Search, Matrix | C++ | [1091-shortest-path-in-binary-matrix.cpp](graphs/1091-shortest-path-in-binary-matrix.cpp) |
| 1192 | [Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/) | 🔴 Hard | Depth-First Search, Graph Theory, Biconnected Component | C++ | [1192-critical-connections-in-a-network.cpp](graphs/1192-critical-connections-in-a-network.cpp) |
| 1202 | [Smallest String With Swaps](https://leetcode.com/problems/smallest-string-with-swaps/) | 🟡 Medium | Array, Hash Table, String… | C++ | [1202-smallest-string-with-swaps.cpp](graphs/1202-smallest-string-with-swaps.cpp) |
| 1306 | [Jump Game III](https://leetcode.com/problems/jump-game-iii/) | 🟡 Medium | Array, Depth-First Search, Breadth-First Search | C++ | [1306-jump-game-iii.cpp](graphs/1306-jump-game-iii.cpp) |
| 1319 | [Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) | 🟡 Medium | Depth-First Search, Breadth-First Search, Union-Find… | C++ | [1319-number-of-operations-to-make-network-connected.cpp](graphs/1319-number-of-operations-to-make-network-connected.cpp) |
| 1325 | [Delete Leaves With a Given Value](https://leetcode.com/problems/delete-leaves-with-a-given-value/) | 🟡 Medium | Tree, Depth-First Search, Binary Tree | C++ | [1325-delete-leaves-with-a-given-value.cpp](graphs/1325-delete-leaves-with-a-given-value.cpp) |
| 2476 | [Closest Nodes Queries in a Binary Search Tree](https://leetcode.com/problems/closest-nodes-queries-in-a-binary-search-tree/) | 🟡 Medium | Array, Binary Search, Tree… | C++ | [2476-closest-nodes-queries-in-a-binary-search-tree.cpp](graphs/2476-closest-nodes-queries-in-a-binary-search-tree.cpp) |

---

### 🌳 Trees <a name="trees"></a>

**6 problems** — 🟢 Easy 1 · 🟡 Medium 5

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | 🟡 Medium | Array, Hash Table, Divide and Conquer… | C++ | [105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp](trees/105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp) |
| 173 | [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/) | 🟡 Medium | Stack, Tree, Design… | C++ | [173-binary-search-tree-iterator.cpp](trees/173-binary-search-tree-iterator.cpp) |
| 222 | [Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/) | 🟢 Easy | Binary Search, Bit Manipulation, Tree… | C++ | [222-count-complete-tree-nodes.cpp](trees/222-count-complete-tree-nodes.cpp) |
| 450 | [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/) | 🟡 Medium | Tree, Binary Search Tree, Binary Tree | C++ | [450-delete-node-in-a-bst.cpp](trees/450-delete-node-in-a-bst.cpp) |
| 701 | [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/) | 🟡 Medium | Tree, Binary Search Tree, Binary Tree | C++ | [701-insert-into-a-binary-search-tree.cpp](trees/701-insert-into-a-binary-search-tree.cpp) |
| 1008 | [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) | 🟡 Medium | Array, Stack, Tree… | C++ | [1008-construct-binary-search-tree-from-preorder-traversal.cpp](trees/1008-construct-binary-search-tree-from-preorder-traversal.cpp) |

---

### 🪟 Sliding Window <a name="sliding-window"></a>

**8 problems** — 🟡 Medium 7 · 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | 🟡 Medium | Hash Table, String, Sliding Window | C++ | [3-longest-substring-without-repeating-characters.cpp](sliding-window/3-longest-substring-without-repeating-characters.cpp) |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | 🔴 Hard | Hash Table, String, Sliding Window | C++ | [76-minimum-window-substring.cpp](sliding-window/76-minimum-window-substring.cpp) |
| 187 | [Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/) | 🟡 Medium | Hash Table, String, Bit Manipulation… | C++ | [187-repeated-dna-sequences.cpp](sliding-window/187-repeated-dna-sequences.cpp) |
| 438 | [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) | 🟡 Medium | Hash Table, String, Sliding Window | C++ | [438-find-all-anagrams-in-a-string.cpp](sliding-window/438-find-all-anagrams-in-a-string.cpp) |
| 713 | [Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/) | 🟡 Medium | Array, Binary Search, Sliding Window… | C++ | [713-subarray-product-less-than-k.cpp](sliding-window/713-subarray-product-less-than-k.cpp) |
| 1004 | [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) | 🟡 Medium | Array, Binary Search, Sliding Window… | C++ | [1004-max-consecutive-ones-iii.cpp](sliding-window/1004-max-consecutive-ones-iii.cpp) |
| 1248 | [Count Number of Nice Subarrays](https://leetcode.com/problems/count-number-of-nice-subarrays/) | 🟡 Medium | Array, Hash Table, Math… | C++ | [1248-count-number-of-nice-subarrays.cpp](sliding-window/1248-count-number-of-nice-subarrays.cpp) |
| 1423 | [Maximum Points You Can Obtain from Cards](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/) | 🟡 Medium | Array, Sliding Window, Prefix Sum | C++ | [1423-maximum-points-you-can-obtain-from-cards.cpp](sliding-window/1423-maximum-points-you-can-obtain-from-cards.cpp) |

---

### 🔍 Binary Search <a name="binary-search"></a>

**27 problems** — 🟢 Easy 8 · 🟡 Medium 18 · 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | 🔴 Hard | Array, Binary Search, Divide and Conquer | C++ | [4-median-of-two-sorted-arrays.cpp](binary-search/4-median-of-two-sorted-arrays.cpp) |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | 🟡 Medium | Array, Binary Search | C++ | [33-search-in-rotated-sorted-array.cpp](binary-search/33-search-in-rotated-sorted-array.cpp) |
| 34 | [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | 🟡 Medium | Array, Binary Search | C++ | [34-find-first-and-last-position-of-element-in-sorted-array.cpp](binary-search/34-find-first-and-last-position-of-element-in-sorted-array.cpp) |
| 35 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | 🟢 Easy | Array, Binary Search | C++ | [35-search-insert-position.cpp](binary-search/35-search-insert-position.cpp) |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | 🟢 Easy | Math, Binary Search | C++ | [69-sqrtx.cpp](binary-search/69-sqrtx.cpp) |
| 74 | [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | 🟡 Medium | Array, Binary Search, Matrix | C++ | [74-search-a-2d-matrix.cpp](binary-search/74-search-a-2d-matrix.cpp) |
| 81 | [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | 🟡 Medium | Array, Binary Search | C++ | [81-search-in-rotated-sorted-array-ii.cpp](binary-search/81-search-in-rotated-sorted-array-ii.cpp) |
| 153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | 🟡 Medium | Array, Binary Search | C++ | [153-find-minimum-in-rotated-sorted-array.cpp](binary-search/153-find-minimum-in-rotated-sorted-array.cpp) |
| 162 | [Find Peak Element](https://leetcode.com/problems/find-peak-element/) | 🟡 Medium | Array, Binary Search | C++ | [162-find-peak-element.cpp](binary-search/162-find-peak-element.cpp) |
| 167 | [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | 🟡 Medium | Array, Two Pointers, Binary Search | C++ | [167-two-sum-ii-input-array-is-sorted.cpp](binary-search/167-two-sum-ii-input-array-is-sorted.cpp) |
| 240 | [Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) | 🟡 Medium | Array, Binary Search, Divide and Conquer… | C++ | [240-search-a-2d-matrix-ii.cpp](binary-search/240-search-a-2d-matrix-ii.cpp) |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | 🟢 Easy | Array, Hash Table, Math… | C++ | [268-missing-number.cpp](binary-search/268-missing-number.cpp) |
| 287 | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | 🟡 Medium | Array, Two Pointers, Binary Search… | C++ | [287-find-the-duplicate-number.cpp](binary-search/287-find-the-duplicate-number.cpp) |
| 349 | [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | 🟢 Easy | Array, Hash Table, Two Pointers… | C++ | [349-intersection-of-two-arrays.cpp](binary-search/349-intersection-of-two-arrays.cpp) |
| 475 | [Heaters](https://leetcode.com/problems/heaters/) | 🟡 Medium | Array, Two Pointers, Binary Search… | C++ | [475-heaters.cpp](binary-search/475-heaters.cpp) |
| 540 | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | 🟡 Medium | Array, Binary Search | C++ | [540-single-element-in-a-sorted-array.cpp](binary-search/540-single-element-in-a-sorted-array.cpp) |
| 704 | [Binary Search](https://leetcode.com/problems/binary-search/) | 🟢 Easy | Array, Binary Search | C++ | [704-binary-search.cpp](binary-search/704-binary-search.cpp) |
| 744 | [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/) | 🟢 Easy | Array, Binary Search | C++ | [744-find-smallest-letter-greater-than-target.cpp](binary-search/744-find-smallest-letter-greater-than-target.cpp) |
| 852 | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/) | 🟡 Medium | Array, Binary Search | C++ | [852-peak-index-in-a-mountain-array.cpp](binary-search/852-peak-index-in-a-mountain-array.cpp) |
| 875 | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | 🟡 Medium | Array, Binary Search | C++ | [875-koko-eating-bananas.cpp](binary-search/875-koko-eating-bananas.cpp) |
| 1011 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | 🟡 Medium | Array, Binary Search | C++ | [1011-capacity-to-ship-packages-within-d-days.cpp](binary-search/1011-capacity-to-ship-packages-within-d-days.cpp) |
| 1283 | [Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/) | 🟡 Medium | Array, Binary Search | C++ | [1283-find-the-smallest-divisor-given-a-threshold.cpp](binary-search/1283-find-the-smallest-divisor-given-a-threshold.cpp) |
| 1351 | [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/) | 🟢 Easy | Array, Binary Search, Matrix | C++ | [1351-count-negative-numbers-in-a-sorted-matrix.cpp](binary-search/1351-count-negative-numbers-in-a-sorted-matrix.cpp) |
| 1482 | [Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/) | 🟡 Medium | Array, Binary Search | C++ | [1482-minimum-number-of-days-to-make-m-bouquets.cpp](binary-search/1482-minimum-number-of-days-to-make-m-bouquets.cpp) |
| 1539 | [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/) | 🟢 Easy | Array, Binary Search | C++ | [1539-kth-missing-positive-number.cpp](binary-search/1539-kth-missing-positive-number.cpp) |
| 1901 | [Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/) | 🟡 Medium | Array, Binary Search, Matrix | C++ | [1901-find-a-peak-element-ii.cpp](binary-search/1901-find-a-peak-element-ii.cpp) |
| 2358 | [Maximum Number of Groups Entering a Competition](https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition/) | 🟡 Medium | Array, Math, Binary Search… | C++ | [2358-maximum-number-of-groups-entering-a-competition.cpp](binary-search/2358-maximum-number-of-groups-entering-a-competition.cpp) |

---

### 👈👉 Two Pointers <a name="two-pointers"></a>

**29 problems** — 🟢 Easy 13 · 🟡 Medium 16

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | 🟡 Medium | Array, Two Pointers, Sorting | C++ | [15-3sum.cpp](two-pointers/15-3sum.cpp) |
| 16 | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | 🟡 Medium | Array, Two Pointers, Sorting | C++ | [16-3sum-closest.cpp](two-pointers/16-3sum-closest.cpp) |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | 🟡 Medium | Array, Two Pointers, Sorting | C++ | [18-4sum.cpp](two-pointers/18-4sum.cpp) |
| 19 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | 🟡 Medium | Linked List, Two Pointers | C++ | [19-remove-nth-node-from-end-of-list.cpp](two-pointers/19-remove-nth-node-from-end-of-list.cpp) |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | 🟢 Easy | Array, Two Pointers | C++ | [26-remove-duplicates-from-sorted-array.cpp](two-pointers/26-remove-duplicates-from-sorted-array.cpp) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | 🟢 Easy | Array, Two Pointers | C++ | [27-remove-element.cpp](two-pointers/27-remove-element.cpp) |
| 31 | [Next Permutation](https://leetcode.com/problems/next-permutation/) | 🟡 Medium | Array, Two Pointers | C++ | [31-next-permutation.cpp](two-pointers/31-next-permutation.cpp) |
| 61 | [Rotate List](https://leetcode.com/problems/rotate-list/) | 🟡 Medium | Linked List, Two Pointers | C++ | [61-rotate-list.cpp](two-pointers/61-rotate-list.cpp) |
| 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | 🟡 Medium | Array, Two Pointers, Sorting | C++ | [75-sort-colors.cpp](two-pointers/75-sort-colors.cpp) |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | 🟢 Easy | Array, Two Pointers, Sorting | C++ | [88-merge-sorted-array.cpp](two-pointers/88-merge-sorted-array.cpp) |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | 🟢 Easy | Hash Table, Linked List, Two Pointers | C++ | [141-linked-list-cycle.cpp](two-pointers/141-linked-list-cycle.cpp) |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | 🟡 Medium | Hash Table, Linked List, Two Pointers | C++ | [142-linked-list-cycle-ii.cpp](two-pointers/142-linked-list-cycle-ii.cpp) |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | 🟡 Medium | Two Pointers, String | C++ | [151-reverse-words-in-a-string.cpp](two-pointers/151-reverse-words-in-a-string.cpp) |
| 160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | 🟢 Easy | Hash Table, Linked List, Two Pointers | C++ | [160-intersection-of-two-linked-lists.cpp](two-pointers/160-intersection-of-two-linked-lists.cpp) |
| 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | 🟡 Medium | Array, Math, Two Pointers | C++ | [189-rotate-array.cpp](two-pointers/189-rotate-array.cpp) |
| 202 | [Happy Number](https://leetcode.com/problems/happy-number/) | 🟢 Easy | Hash Table, Math, Two Pointers | C++ | [202-happy-number.cpp](two-pointers/202-happy-number.cpp) |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | 🟢 Easy | Linked List, Two Pointers, Stack… | C++ | [234-palindrome-linked-list.cpp](two-pointers/234-palindrome-linked-list.cpp) |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | 🟢 Easy | Array, Two Pointers | C++ | [283-move-zeroes.cpp](two-pointers/283-move-zeroes.cpp) |
| 455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | 🟢 Easy | Array, Two Pointers, Greedy… | C++ | [455-assign-cookies.cpp](two-pointers/455-assign-cookies.cpp) |
| 541 | [Reverse String II](https://leetcode.com/problems/reverse-string-ii/) | 🟢 Easy | Two Pointers, String | C++ | [541-reverse-string-ii.cpp](two-pointers/541-reverse-string-ii.cpp) |
| 556 | [Next Greater Element III](https://leetcode.com/problems/next-greater-element-iii/) | 🟡 Medium | Math, Two Pointers, String | C++ | [556-next-greater-element-iii.cpp](two-pointers/556-next-greater-element-iii.cpp) |
| 795 | [Number of Subarrays with Bounded Maximum](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/) | 🟡 Medium | Array, Two Pointers | C++ | [795-number-of-subarrays-with-bounded-maximum.cpp](two-pointers/795-number-of-subarrays-with-bounded-maximum.cpp) |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | 🟢 Easy | Linked List, Two Pointers | C++ | [876-middle-of-the-linked-list.cpp](two-pointers/876-middle-of-the-linked-list.cpp) |
| 881 | [Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) | 🟡 Medium | Array, Two Pointers, Greedy… | C++ | [881-boats-to-save-people.cpp](two-pointers/881-boats-to-save-people.cpp) |
| 925 | [Long Pressed Name](https://leetcode.com/problems/long-pressed-name/) | 🟢 Easy | Two Pointers, String | C++ | [925-long-pressed-name.cpp](two-pointers/925-long-pressed-name.cpp) |
| 977 | [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/) | 🟢 Easy | Array, Two Pointers, Sorting | C++ | [977-squares-of-a-sorted-array.cpp](two-pointers/977-squares-of-a-sorted-array.cpp) |
| 1750 | [Minimum Length of String After Deleting Similar Ends](https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/) | 🟡 Medium | Two Pointers, String | C++ | [1750-minimum-length-of-string-after-deleting-similar-ends.cpp](two-pointers/1750-minimum-length-of-string-after-deleting-similar-ends.cpp) |
| 2095 | [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/) | 🟡 Medium | Linked List, Two Pointers | C++ | [2095-delete-the-middle-node-of-a-linked-list.cpp](two-pointers/2095-delete-the-middle-node-of-a-linked-list.cpp) |
| 2149 | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | 🟡 Medium | Array, Two Pointers, Simulation | C++ | [2149-rearrange-array-elements-by-sign.cpp](two-pointers/2149-rearrange-array-elements-by-sign.cpp) |

---

### 📚 Stack & Queue <a name="stack-queue"></a>

**8 problems** — 🟢 Easy 3 · 🟡 Medium 4 · 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | 🟢 Easy | String, Stack | C++ | [20-valid-parentheses.cpp](stack-queue/20-valid-parentheses.cpp) |
| 84 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | 🔴 Hard | Array, Stack, Monotonic Stack | C++ | [84-largest-rectangle-in-histogram.cpp](stack-queue/84-largest-rectangle-in-histogram.cpp) |
| 402 | [Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | 🟡 Medium | String, Stack, Greedy… | C++ | [402-remove-k-digits.cpp](stack-queue/402-remove-k-digits.cpp) |
| 739 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | 🟡 Medium | Array, Stack, Monotonic Stack | C++ | [739-daily-temperatures.cpp](stack-queue/739-daily-temperatures.cpp) |
| 769 | [Max Chunks To Make Sorted](https://leetcode.com/problems/max-chunks-to-make-sorted/) | 🟡 Medium | Array, Stack, Greedy… | C++ | [769-max-chunks-to-make-sorted.cpp](stack-queue/769-max-chunks-to-make-sorted.cpp) |
| 901 | [Online Stock Span](https://leetcode.com/problems/online-stock-span/) | 🟡 Medium | Stack, Design, Monotonic Stack… | C++ | [901-online-stock-span.cpp](stack-queue/901-online-stock-span.cpp) |
| 1021 | [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/) | 🟢 Easy | String, Stack | C++ | [1021-remove-outermost-parentheses.cpp](stack-queue/1021-remove-outermost-parentheses.cpp) |
| 1614 | [Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) | 🟢 Easy | String, Stack | C++ | [1614-maximum-nesting-depth-of-the-parentheses.cpp](stack-queue/1614-maximum-nesting-depth-of-the-parentheses.cpp) |

---

### 🔗 Linked Lists <a name="linked-lists"></a>

**6 problems** — 🟢 Easy 2 · 🟡 Medium 3 · 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | 🟡 Medium | Linked List, Math, Recursion | C++ | [2-add-two-numbers.cpp](linked-lists/2-add-two-numbers.cpp) |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | 🟢 Easy | Linked List, Recursion | C++ | [21-merge-two-sorted-lists.cpp](linked-lists/21-merge-two-sorted-lists.cpp) |
| 25 | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) | 🔴 Hard | Linked List, Recursion | C++ | [25-reverse-nodes-in-k-group.cpp](linked-lists/25-reverse-nodes-in-k-group.cpp) |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | 🟡 Medium | Hash Table, Linked List | C++ | [138-copy-list-with-random-pointer.cpp](linked-lists/138-copy-list-with-random-pointer.cpp) |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | 🟢 Easy | Linked List, Recursion | C++ | [206-reverse-linked-list.cpp](linked-lists/206-reverse-linked-list.cpp) |
| 328 | [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/) | 🟡 Medium | Linked List | C++ | [328-odd-even-linked-list.cpp](linked-lists/328-odd-even-linked-list.cpp) |

---

### 💰 Greedy <a name="greedy"></a>

**14 problems** — 🟢 Easy 5 · 🟡 Medium 9

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 452 | [Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | 🟡 Medium | Array, Greedy, Sorting | C++ | [452-minimum-number-of-arrows-to-burst-balloons.cpp](greedy/452-minimum-number-of-arrows-to-burst-balloons.cpp) |
| 781 | [Rabbits in Forest](https://leetcode.com/problems/rabbits-in-forest/) | 🟡 Medium | Array, Hash Table, Math… | C++ | [781-rabbits-in-forest.cpp](greedy/781-rabbits-in-forest.cpp) |
| 860 | [Lemonade Change](https://leetcode.com/problems/lemonade-change/) | 🟢 Easy | Array, Greedy | C++ | [860-lemonade-change.cpp](greedy/860-lemonade-change.cpp) |
| 1007 | [Minimum Domino Rotations For Equal Row](https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/) | 🟡 Medium | Array, Greedy | C++ | [1007-minimum-domino-rotations-for-equal-row.cpp](greedy/1007-minimum-domino-rotations-for-equal-row.cpp) |
| 1053 | [Previous Permutation With One Swap](https://leetcode.com/problems/previous-permutation-with-one-swap/) | 🟡 Medium | Array, Greedy | C++ | [1053-previous-permutation-with-one-swap.cpp](greedy/1053-previous-permutation-with-one-swap.cpp) |
| 1144 | [Decrease Elements To Make Array Zigzag](https://leetcode.com/problems/decrease-elements-to-make-array-zigzag/) | 🟡 Medium | Array, Greedy | C++ | [1144-decrease-elements-to-make-array-zigzag.cpp](greedy/1144-decrease-elements-to-make-array-zigzag.cpp) |
| 1903 | [Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/) | 🟢 Easy | Math, String, Greedy | C++ | [1903-largest-odd-number-in-string.cpp](greedy/1903-largest-odd-number-in-string.cpp) |
| 1968 | [Array With Elements Not Equal to Average of Neighbors](https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/) | 🟡 Medium | Array, Greedy, Sorting | C++ | [1968-array-with-elements-not-equal-to-average-of-neighbors.cpp](greedy/1968-array-with-elements-not-equal-to-average-of-neighbors.cpp) |
| 2091 | [Removing Minimum and Maximum From Array](https://leetcode.com/problems/removing-minimum-and-maximum-from-array/) | 🟡 Medium | Array, Greedy | C++ | [2091-removing-minimum-and-maximum-from-array.cpp](greedy/2091-removing-minimum-and-maximum-from-array.cpp) |
| 2126 | [Destroying Asteroids](https://leetcode.com/problems/destroying-asteroids/) | 🟡 Medium | Array, Greedy, Sorting | C++ | [2126-destroying-asteroids.cpp](greedy/2126-destroying-asteroids.cpp) |
| 2144 | [Minimum Cost of Buying Candies With Discount](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/) | 🟢 Easy | Array, Greedy, Sorting | C++ | [2144-minimum-cost-of-buying-candies-with-discount.cpp](greedy/2144-minimum-cost-of-buying-candies-with-discount.cpp) |
| 2160 | [Minimum Sum of Four Digit Number After Splitting Digits](https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/) | 🟢 Easy | Math, Greedy, Sorting | C++ | [2160-minimum-sum-of-four-digit-number-after-splitting-digits.cpp](greedy/2160-minimum-sum-of-four-digit-number-after-splitting-digits.cpp) |
| 2656 | [Maximum Sum With Exactly K Elements ](https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/) | 🟢 Easy | Array, Greedy | C++ | [2656-maximum-sum-with-exactly-k-elements.cpp](greedy/2656-maximum-sum-with-exactly-k-elements.cpp) |
| 2844 | [Minimum Operations to Make a Special Number](https://leetcode.com/problems/minimum-operations-to-make-a-special-number/) | 🟡 Medium | Math, String, Greedy… | C++ | [2844-minimum-operations-to-make-a-special-number.cpp](greedy/2844-minimum-operations-to-make-a-special-number.cpp) |

---

### ⚙️ Bit Manipulation <a name="bit-manipulation"></a>

**15 problems** — 🟢 Easy 7 · 🟡 Medium 8

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 29 | [Divide Two Integers](https://leetcode.com/problems/divide-two-integers/) | 🟡 Medium | Math, Bit Manipulation | C++ | [29-divide-two-integers.cpp](bit-manipulation/29-divide-two-integers.cpp) |
| 67 | [Add Binary](https://leetcode.com/problems/add-binary/) | 🟢 Easy | Math, String, Bit Manipulation… | C++ | [67-add-binary.cpp](bit-manipulation/67-add-binary.cpp) |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | 🟢 Easy | Array, Bit Manipulation | C++ | [136-single-number.cpp](bit-manipulation/136-single-number.cpp) |
| 137 | [Single Number II](https://leetcode.com/problems/single-number-ii/) | 🟡 Medium | Array, Bit Manipulation | C++ | [137-single-number-ii.cpp](bit-manipulation/137-single-number-ii.cpp) |
| 191 | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | 🟢 Easy | Divide and Conquer, Bit Manipulation | C++ | [191-number-of-1-bits.cpp](bit-manipulation/191-number-of-1-bits.cpp) |
| 231 | [Power of Two](https://leetcode.com/problems/power-of-two/) | 🟢 Easy | Math, Bit Manipulation, Recursion | C++ | [231-power-of-two.cpp](bit-manipulation/231-power-of-two.cpp) |
| 342 | [Power of Four](https://leetcode.com/problems/power-of-four/) | 🟢 Easy | Math, Bit Manipulation, Recursion | C++ | [342-power-of-four.cpp](bit-manipulation/342-power-of-four.cpp) |
| 477 | [Total Hamming Distance](https://leetcode.com/problems/total-hamming-distance/) | 🟡 Medium | Array, Math, Bit Manipulation | C++ | [477-total-hamming-distance.cpp](bit-manipulation/477-total-hamming-distance.cpp) |
| 762 | [Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/) | 🟢 Easy | Math, Bit Manipulation | C++ | [762-prime-number-of-set-bits-in-binary-representation.cpp](bit-manipulation/762-prime-number-of-set-bits-in-binary-representation.cpp) |
| 779 | [K-th Symbol in Grammar](https://leetcode.com/problems/k-th-symbol-in-grammar/) | 🟡 Medium | Math, Bit Manipulation, Recursion | C++ | [779-k-th-symbol-in-grammar.cpp](bit-manipulation/779-k-th-symbol-in-grammar.cpp) |
| 1310 | [XOR Queries of a Subarray](https://leetcode.com/problems/xor-queries-of-a-subarray/) | 🟡 Medium | Array, Bit Manipulation, Prefix Sum | C++ | [1310-xor-queries-of-a-subarray.cpp](bit-manipulation/1310-xor-queries-of-a-subarray.cpp) |
| 1318 | [Minimum Flips to Make a OR b Equal to c](https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/) | 🟡 Medium | Bit Manipulation | C++ | [1318-minimum-flips-to-make-a-or-b-equal-to-c.cpp](bit-manipulation/1318-minimum-flips-to-make-a-or-b-equal-to-c.cpp) |
| 1829 | [Maximum XOR for Each Query](https://leetcode.com/problems/maximum-xor-for-each-query/) | 🟡 Medium | Array, Bit Manipulation, Prefix Sum | C++ | [1829-maximum-xor-for-each-query.cpp](bit-manipulation/1829-maximum-xor-for-each-query.cpp) |
| 2220 | [Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/) | 🟢 Easy | Bit Manipulation | C++ | [2220-minimum-bit-flips-to-convert-number.cpp](bit-manipulation/2220-minimum-bit-flips-to-convert-number.cpp) |
| 2433 | [Find The Original Array of Prefix Xor](https://leetcode.com/problems/find-the-original-array-of-prefix-xor/) | 🟡 Medium | Array, Bit Manipulation | C++ | [2433-find-the-original-array-of-prefix-xor.cpp](bit-manipulation/2433-find-the-original-array-of-prefix-xor.cpp) |

---

### ➗ Math <a name="math"></a>

**38 problems** — 🟢 Easy 25 · 🟡 Medium 11 · 🔴 Hard 2

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 7 | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | 🟡 Medium | Math | C++ | [7-reverse-integer.cpp](math/7-reverse-integer.cpp) |
| 12 | [Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | 🟡 Medium | Hash Table, Math, String | C++ | [12-integer-to-roman.cpp](math/12-integer-to-roman.cpp) |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | 🟢 Easy | Hash Table, Math, String | C++ | [13-roman-to-integer.cpp](math/13-roman-to-integer.cpp) |
| 48 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | 🟡 Medium | Array, Math, Matrix | C++ | [48-rotate-image.cpp](math/48-rotate-image.cpp) |
| 50 | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | 🟡 Medium | Math, Recursion | C++ | [50-powx-n.cpp](math/50-powx-n.cpp) |
| 60 | [Permutation Sequence](https://leetcode.com/problems/permutation-sequence/) | 🔴 Hard | Math, Recursion | C++ | [60-permutation-sequence.cpp](math/60-permutation-sequence.cpp) |
| 66 | [Plus One](https://leetcode.com/problems/plus-one/) | 🟢 Easy | Array, Math | C++ | [66-plus-one.cpp](math/66-plus-one.cpp) |
| 204 | [Count Primes](https://leetcode.com/problems/count-primes/) | 🟡 Medium | Array, Math, Enumeration… | C++ | [204-count-primes.cpp](math/204-count-primes.cpp) |
| 258 | [Add Digits](https://leetcode.com/problems/add-digits/) | 🟢 Easy | Math, Simulation, Number Theory | C++ | [258-add-digits.cpp](math/258-add-digits.cpp) |
| 319 | [Bulb Switcher](https://leetcode.com/problems/bulb-switcher/) | 🟡 Medium | Math, Brainteaser | C++ | [319-bulb-switcher.cpp](math/319-bulb-switcher.cpp) |
| 447 | [Number of Boomerangs](https://leetcode.com/problems/number-of-boomerangs/) | 🟡 Medium | Array, Hash Table, Math | C++ | [447-number-of-boomerangs.cpp](math/447-number-of-boomerangs.cpp) |
| 492 | [Construct the Rectangle](https://leetcode.com/problems/construct-the-rectangle/) | 🟢 Easy | Math | C++ | [492-construct-the-rectangle.cpp](math/492-construct-the-rectangle.cpp) |
| 628 | [Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers/) | 🟢 Easy | Array, Math, Sorting | C++ | [628-maximum-product-of-three-numbers.cpp](math/628-maximum-product-of-three-numbers.cpp) |
| 914 | [X of a Kind in a Deck of Cards](https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/) | 🟢 Easy | Array, Hash Table, Math… | C++ | [914-x-of-a-kind-in-a-deck-of-cards.cpp](math/914-x-of-a-kind-in-a-deck-of-cards.cpp) |
| 989 | [Add to Array-Form of Integer](https://leetcode.com/problems/add-to-array-form-of-integer/) | 🟢 Easy | Array, Math | C++ | [989-add-to-array-form-of-integer.cpp](math/989-add-to-array-form-of-integer.cpp) |
| 1071 | [Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/) | 🟢 Easy | Math, String | C++ | [1071-greatest-common-divisor-of-strings.cpp](math/1071-greatest-common-divisor-of-strings.cpp) |
| 1281 | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | 🟢 Easy | Math | C++ | [1281-subtract-the-product-and-sum-of-digits-of-an-integer.cpp](math/1281-subtract-the-product-and-sum-of-digits-of-an-integer.cpp) |
| 1304 | [Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/) | 🟢 Easy | Array, Math | C++ | [1304-find-n-unique-integers-sum-up-to-zero.cpp](math/1304-find-n-unique-integers-sum-up-to-zero.cpp) |
| 1523 | [Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/) | 🟢 Easy | Math | C++ | [1523-count-odd-numbers-in-an-interval-range.cpp](math/1523-count-odd-numbers-in-an-interval-range.cpp) |
| 1627 | [Graph Connectivity With Threshold](https://leetcode.com/problems/graph-connectivity-with-threshold/) | 🔴 Hard | Array, Math, Union-Find… | C++ | [1627-graph-connectivity-with-threshold.cpp](math/1627-graph-connectivity-with-threshold.cpp) |
| 1688 | [Count of Matches in Tournament](https://leetcode.com/problems/count-of-matches-in-tournament/) | 🟢 Easy | Math, Simulation | C++ | [1688-count-of-matches-in-tournament.cpp](math/1688-count-of-matches-in-tournament.cpp) |
| 1716 | [Calculate Money in Leetcode Bank](https://leetcode.com/problems/calculate-money-in-leetcode-bank/) | 🟢 Easy | Math | C++ | [1716-calculate-money-in-leetcode-bank.cpp](math/1716-calculate-money-in-leetcode-bank.cpp) |
| 1822 | [Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/) | 🟢 Easy | Array, Math | C++ | [1822-sign-of-the-product-of-an-array.cpp](math/1822-sign-of-the-product-of-an-array.cpp) |
| 1837 | [Sum of Digits in Base K](https://leetcode.com/problems/sum-of-digits-in-base-k/) | 🟢 Easy | Math | C++ | [1837-sum-of-digits-in-base-k.cpp](math/1837-sum-of-digits-in-base-k.cpp) |
| 1922 | [Count Good Numbers](https://leetcode.com/problems/count-good-numbers/) | 🟡 Medium | Math, Recursion | C++ | [1922-count-good-numbers.cpp](math/1922-count-good-numbers.cpp) |
| 1979 | [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/) | 🟢 Easy | Array, Math, Number Theory | C++ | [1979-find-greatest-common-divisor-of-array.cpp](math/1979-find-greatest-common-divisor-of-array.cpp) |
| 2221 | [Find Triangular Sum of an Array](https://leetcode.com/problems/find-triangular-sum-of-an-array/) | 🟡 Medium | Array, Math, Simulation… | C++ | [2221-find-triangular-sum-of-an-array.cpp](math/2221-find-triangular-sum-of-an-array.cpp) |
| 2235 | [Add Two Integers](https://leetcode.com/problems/add-two-integers/) | 🟢 Easy | Math | C++ | [2235-add-two-integers.cpp](math/2235-add-two-integers.cpp) |
| 2455 | [Average Value of Even Numbers That Are Divisible by Three](https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/) | 🟢 Easy | Array, Math | C++ | [2455-average-value-of-even-numbers-that-are-divisible-by-three.cpp](math/2455-average-value-of-even-numbers-that-are-divisible-by-three.cpp) |
| 2485 | [Find the Pivot Integer](https://leetcode.com/problems/find-the-pivot-integer/) | 🟢 Easy | Math, Prefix Sum | C++ | [2485-find-the-pivot-integer.cpp](math/2485-find-the-pivot-integer.cpp) |
| 2520 | [Count the Digits That Divide a Number](https://leetcode.com/problems/count-the-digits-that-divide-a-number/) | 🟢 Easy | Math | C++ | [2520-count-the-digits-that-divide-a-number.cpp](math/2520-count-the-digits-that-divide-a-number.cpp) |
| 2535 | [Difference Between Element Sum and Digit Sum of an Array](https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/) | 🟢 Easy | Array, Math | C++ | [2535-difference-between-element-sum-and-digit-sum-of-an-array.cpp](math/2535-difference-between-element-sum-and-digit-sum-of-an-array.cpp) |
| 2544 | [Alternating Digit Sum](https://leetcode.com/problems/alternating-digit-sum/) | 🟢 Easy | Math | C++ | [2544-alternating-digit-sum.cpp](math/2544-alternating-digit-sum.cpp) |
| 2748 | [Number of Beautiful Pairs](https://leetcode.com/problems/number-of-beautiful-pairs/) | 🟢 Easy | Array, Hash Table, Math… | C++ | [2748-number-of-beautiful-pairs.cpp](math/2748-number-of-beautiful-pairs.cpp) |
| 2769 | [Find the Maximum Achievable Number](https://leetcode.com/problems/find-the-maximum-achievable-number/) | 🟢 Easy | Math | C++ | [2769-find-the-maximum-achievable-number.cpp](math/2769-find-the-maximum-achievable-number.cpp) |
| 2947 | [Count Beautiful Substrings I](https://leetcode.com/problems/count-beautiful-substrings-i/) | 🟡 Medium | Hash Table, Math, String… | C++ | [2947-count-beautiful-substrings-i.cpp](math/2947-count-beautiful-substrings-i.cpp) |
| 3024 | [Type of Triangle](https://leetcode.com/problems/type-of-triangle/) | 🟢 Easy | Array, Math, Sorting | C++ | [3024-type-of-triangle.cpp](math/3024-type-of-triangle.cpp) |
| 3115 | [Maximum Prime Difference](https://leetcode.com/problems/maximum-prime-difference/) | 🟡 Medium | Array, Math, Number Theory | C++ | [3115-maximum-prime-difference.cpp](math/3115-maximum-prime-difference.cpp) |

---

### 🔤 Strings <a name="strings"></a>

**15 problems** — 🟢 Easy 8 · 🟡 Medium 7

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 6 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | 🟡 Medium | String | C++ | [6-zigzag-conversion.cpp](strings/6-zigzag-conversion.cpp) |
| 8 | [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | 🟡 Medium | String | C++ | [8-string-to-integer-atoi.cpp](strings/8-string-to-integer-atoi.cpp) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | 🟡 Medium | Array, Hash Table, String… | C++ | [49-group-anagrams.cpp](strings/49-group-anagrams.cpp) |
| 205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | 🟢 Easy | Hash Table, String | C++ | [205-isomorphic-strings.cpp](strings/205-isomorphic-strings.cpp) |
| 383 | [Ransom Note](https://leetcode.com/problems/ransom-note/) | 🟢 Easy | Hash Table, String, Counting | C++ | [383-ransom-note.cpp](strings/383-ransom-note.cpp) |
| 468 | [Validate IP Address](https://leetcode.com/problems/validate-ip-address/) | 🟡 Medium | String | C++ | [468-validate-ip-address.cpp](strings/468-validate-ip-address.cpp) |
| 482 | [License Key Formatting](https://leetcode.com/problems/license-key-formatting/) | 🟢 Easy | String | C++ | [482-license-key-formatting.cpp](strings/482-license-key-formatting.cpp) |
| 771 | [Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/) | 🟢 Easy | Hash Table, String | C++ | [771-jewels-and-stones.cpp](strings/771-jewels-and-stones.cpp) |
| 796 | [Rotate String](https://leetcode.com/problems/rotate-string/) | 🟢 Easy | String, String Matching | C++ | [796-rotate-string.cpp](strings/796-rotate-string.cpp) |
| 990 | [Satisfiability of Equality Equations](https://leetcode.com/problems/satisfiability-of-equality-equations/) | 🟡 Medium | Array, String, Union-Find… | C++ | [990-satisfiability-of-equality-equations.cpp](strings/990-satisfiability-of-equality-equations.cpp) |
| 1781 | [Sum of Beauty of All Substrings](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/) | 🟡 Medium | Hash Table, String, Counting | C++ | [1781-sum-of-beauty-of-all-substrings.cpp](strings/1781-sum-of-beauty-of-all-substrings.cpp) |
| 1897 | [Redistribute Characters to Make All Strings Equal](https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/) | 🟢 Easy | Hash Table, String, Counting | C++ | [1897-redistribute-characters-to-make-all-strings-equal.cpp](strings/1897-redistribute-characters-to-make-all-strings-equal.cpp) |
| 2011 | [Final Value of Variable After Performing Operations](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/) | 🟢 Easy | Array, String, Simulation | C++ | [2011-final-value-of-variable-after-performing-operations.cpp](strings/2011-final-value-of-variable-after-performing-operations.cpp) |
| 2559 | [Count Vowel Strings in Ranges](https://leetcode.com/problems/count-vowel-strings-in-ranges/) | 🟡 Medium | Array, String, Prefix Sum | C++ | [2559-count-vowel-strings-in-ranges.cpp](strings/2559-count-vowel-strings-in-ranges.cpp) |
| 3110 | [Score of a String](https://leetcode.com/problems/score-of-a-string/) | 🟢 Easy | String | C++ | [3110-score-of-a-string.cpp](strings/3110-score-of-a-string.cpp) |

---

### 📦 Arrays & Hashing <a name="arrays-hashing"></a>

**34 problems** — 🟢 Easy 20 · 🟡 Medium 13 · 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | 🟢 Easy | Array, Hash Table | C++ | [1-two-sum.cpp](arrays-hashing/1-two-sum.cpp) |
| 54 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | 🟡 Medium | Array, Matrix, Simulation | C++ | [54-spiral-matrix.cpp](arrays-hashing/54-spiral-matrix.cpp) |
| 56 | [Merge Intervals](https://leetcode.com/problems/merge-intervals/) | 🟡 Medium | Array, Sorting | C++ | [56-merge-intervals.cpp](arrays-hashing/56-merge-intervals.cpp) |
| 57 | [Insert Interval](https://leetcode.com/problems/insert-interval/) | 🟡 Medium | Array | C++ | [57-insert-interval.cpp](arrays-hashing/57-insert-interval.cpp) |
| 73 | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) | 🟡 Medium | Array, Hash Table, Matrix | C++ | [73-set-matrix-zeroes.cpp](arrays-hashing/73-set-matrix-zeroes.cpp) |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | 🟡 Medium | Array, Hash Table, Union-Find | C++ | [128-longest-consecutive-sequence.cpp](arrays-hashing/128-longest-consecutive-sequence.cpp) |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy | Array, Hash Table, Divide and Conquer… | C++ | [169-majority-element.cpp](arrays-hashing/169-majority-element.cpp) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | 🟢 Easy | Array, Hash Table, Sorting | C++ | [217-contains-duplicate.cpp](arrays-hashing/217-contains-duplicate.cpp) |
| 228 | [Summary Ranges](https://leetcode.com/problems/summary-ranges/) | 🟢 Easy | Array | C++ | [228-summary-ranges.cpp](arrays-hashing/228-summary-ranges.cpp) |
| 229 | [Majority Element II](https://leetcode.com/problems/majority-element-ii/) | 🟡 Medium | Array, Hash Table, Sorting… | C++ | [229-majority-element-ii.cpp](arrays-hashing/229-majority-element-ii.cpp) |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | 🟡 Medium | Array, Prefix Sum | C++ | [238-product-of-array-except-self.cpp](arrays-hashing/238-product-of-array-except-self.cpp) |
| 307 | [Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/) | 🟡 Medium | Array, Divide and Conquer, Design… | C++ | [307-range-sum-query-mutable.cpp](arrays-hashing/307-range-sum-query-mutable.cpp) |
| 485 | [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) | 🟢 Easy | Array | C++ | [485-max-consecutive-ones.cpp](arrays-hashing/485-max-consecutive-ones.cpp) |
| 495 | [Teemo Attacking](https://leetcode.com/problems/teemo-attacking/) | 🟢 Easy | Array, Simulation | C++ | [495-teemo-attacking.cpp](arrays-hashing/495-teemo-attacking.cpp) |
| 560 | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | 🟡 Medium | Array, Hash Table, Prefix Sum | C++ | [560-subarray-sum-equals-k.cpp](arrays-hashing/560-subarray-sum-equals-k.cpp) |
| 674 | [Longest Continuous Increasing Subsequence](https://leetcode.com/problems/longest-continuous-increasing-subsequence/) | 🟢 Easy | Array | C++ | [674-longest-continuous-increasing-subsequence.cpp](arrays-hashing/674-longest-continuous-increasing-subsequence.cpp) |
| 724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | 🟢 Easy | Array, Prefix Sum | C++ | [724-find-pivot-index.cpp](arrays-hashing/724-find-pivot-index.cpp) |
| 747 | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | 🟢 Easy | Array, Sorting | C++ | [747-largest-number-at-least-twice-of-others.cpp](arrays-hashing/747-largest-number-at-least-twice-of-others.cpp) |
| 803 | [Bricks Falling When Hit](https://leetcode.com/problems/bricks-falling-when-hit/) | 🔴 Hard | Array, Union-Find, Matrix | C++ | [803-bricks-falling-when-hit.cpp](arrays-hashing/803-bricks-falling-when-hit.cpp) |
| 867 | [Transpose Matrix](https://leetcode.com/problems/transpose-matrix/) | 🟢 Easy | Array, Matrix, Simulation | C++ | [867-transpose-matrix.cpp](arrays-hashing/867-transpose-matrix.cpp) |
| 896 | [Monotonic Array](https://leetcode.com/problems/monotonic-array/) | 🟢 Easy | Array | C++ | [896-monotonic-array.cpp](arrays-hashing/896-monotonic-array.cpp) |
| 915 | [Partition Array into Disjoint Intervals](https://leetcode.com/problems/partition-array-into-disjoint-intervals/) | 🟡 Medium | Array | C++ | [915-partition-array-into-disjoint-intervals.cpp](arrays-hashing/915-partition-array-into-disjoint-intervals.cpp) |
| 1222 | [Queens That Can Attack the King](https://leetcode.com/problems/queens-that-can-attack-the-king/) | 🟡 Medium | Array, Matrix, Simulation | C++ | [1222-queens-that-can-attack-the-king.cpp](arrays-hashing/1222-queens-that-can-attack-the-king.cpp) |
| 1287 | [Element Appearing More Than 25% In Sorted Array](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/) | 🟢 Easy | Array | C++ | [1287-element-appearing-more-than-25-in-sorted-array.cpp](arrays-hashing/1287-element-appearing-more-than-25-in-sorted-array.cpp) |
| 1331 | [Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/) | 🟢 Easy | Array, Hash Table, Sorting | C++ | [1331-rank-transform-of-an-array.cpp](arrays-hashing/1331-rank-transform-of-an-array.cpp) |
| 1431 | [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) | 🟢 Easy | Array | C++ | [1431-kids-with-the-greatest-number-of-candies.cpp](arrays-hashing/1431-kids-with-the-greatest-number-of-candies.cpp) |
| 1491 | [Average Salary Excluding the Minimum and Maximum Salary](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/) | 🟢 Easy | Array, Sorting | C++ | [1491-average-salary-excluding-the-minimum-and-maximum-salary.cpp](arrays-hashing/1491-average-salary-excluding-the-minimum-and-maximum-salary.cpp) |
| 1572 | [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/) | 🟢 Easy | Array, Matrix | C++ | [1572-matrix-diagonal-sum.cpp](arrays-hashing/1572-matrix-diagonal-sum.cpp) |
| 1584 | [Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) | 🟡 Medium | Array, Union-Find, Graph Theory… | C++ | [1584-min-cost-to-connect-all-points.cpp](arrays-hashing/1584-min-cost-to-connect-all-points.cpp) |
| 1646 | [Get Maximum in Generated Array](https://leetcode.com/problems/get-maximum-in-generated-array/) | 🟢 Easy | Array, Simulation | C++ | [1646-get-maximum-in-generated-array.cpp](arrays-hashing/1646-get-maximum-in-generated-array.cpp) |
| 1748 | [Sum of Unique Elements](https://leetcode.com/problems/sum-of-unique-elements/) | 🟢 Easy | Array, Hash Table, Counting | C++ | [1748-sum-of-unique-elements.cpp](arrays-hashing/1748-sum-of-unique-elements.cpp) |
| 2043 | [Simple Bank System](https://leetcode.com/problems/simple-bank-system/) | 🟡 Medium | Array, Hash Table, Design… | C++ | [2043-simple-bank-system.cpp](arrays-hashing/2043-simple-bank-system.cpp) |
| 2644 | [Find the Maximum Divisibility Score](https://leetcode.com/problems/find-the-maximum-divisibility-score/) | 🟢 Easy | Array | C++ | [2644-find-the-maximum-divisibility-score.cpp](arrays-hashing/2644-find-the-maximum-divisibility-score.cpp) |
| 3033 | [Modify the Matrix](https://leetcode.com/problems/modify-the-matrix/) | 🟢 Easy | Array, Matrix | C++ | [3033-modify-the-matrix.cpp](arrays-hashing/3033-modify-the-matrix.cpp) |

---

### 🗄️ SQL / Database <a name="sql"></a>

**15 problems** — 🟢 Easy 15

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 584 | [Find Customer Referee](https://leetcode.com/problems/find-customer-referee/) | 🟢 Easy | Database | SQL | [584-find-customer-referee.txt](sql/584-find-customer-referee.txt) |
| 595 | [Big Countries](https://leetcode.com/problems/big-countries/) | 🟢 Easy | Database | SQL | [595-big-countries.txt](sql/595-big-countries.txt) |
| 620 | [Not Boring Movies](https://leetcode.com/problems/not-boring-movies/) | 🟢 Easy | Database | SQL | [620-not-boring-movies.txt](sql/620-not-boring-movies.txt) |
| 1068 | [Product Sales Analysis I](https://leetcode.com/problems/product-sales-analysis-i/) | 🟢 Easy | Database | SQL | [1068-product-sales-analysis-i.txt](sql/1068-product-sales-analysis-i.txt) |
| 1075 | [Project Employees I](https://leetcode.com/problems/project-employees-i/) | 🟢 Easy | Database | SQL | [1075-project-employees-i.txt](sql/1075-project-employees-i.txt) |
| 1148 | [Article Views I](https://leetcode.com/problems/article-views-i/) | 🟢 Easy | Database | SQL | [1148-article-views-i.txt](sql/1148-article-views-i.txt) |
| 1211 | [Queries Quality and Percentage](https://leetcode.com/problems/queries-quality-and-percentage/) | 🟢 Easy | Database | SQL | [1211-queries-quality-and-percentage.txt](sql/1211-queries-quality-and-percentage.txt) |
| 1378 | [Replace Employee ID With The Unique Identifier](https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/) | 🟢 Easy | Database | SQL | [1378-replace-employee-id-with-the-unique-identifier.txt](sql/1378-replace-employee-id-with-the-unique-identifier.txt) |
| 1581 | [Customer Who Visited but Did Not Make Any Transactions](https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/) | 🟢 Easy | Database | SQL | [1581-customer-who-visited-but-did-not-make-any-transactions.txt](sql/1581-customer-who-visited-but-did-not-make-any-transactions.txt) |
| 1633 | [Percentage of Users Attended a Contest](https://leetcode.com/problems/percentage-of-users-attended-a-contest/) | 🟢 Easy | Database | SQL | [1633-percentage-of-users-attended-a-contest.txt](sql/1633-percentage-of-users-attended-a-contest.txt) |
| 1661 | [Average Time of Process per Machine](https://leetcode.com/problems/average-time-of-process-per-machine/) | 🟢 Easy | Database | SQL | [1661-average-time-of-process-per-machine.txt](sql/1661-average-time-of-process-per-machine.txt) |
| 1683 | [Invalid Tweets](https://leetcode.com/problems/invalid-tweets/) | 🟢 Easy | Database | SQL | [1683-invalid-tweets.txt](sql/1683-invalid-tweets.txt) |
| 1757 | [Recyclable and Low Fat Products](https://leetcode.com/problems/recyclable-and-low-fat-products/) | 🟢 Easy | Database | SQL | [1757-recyclable-and-low-fat-products.txt](sql/1757-recyclable-and-low-fat-products.txt) |
| 1890 | [The Latest Login in 2020](https://leetcode.com/problems/the-latest-login-in-2020/) | 🟢 Easy | Database | SQL | [1890-the-latest-login-in-2020.txt](sql/1890-the-latest-login-in-2020.txt) |
| 2356 | [Number of Unique Subjects Taught by Each Teacher](https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/) | 🟢 Easy | Database | SQL | [2356-number-of-unique-subjects-taught-by-each-teacher.txt](sql/2356-number-of-unique-subjects-taught-by-each-teacher.txt) |

---

### 📁 Miscellaneous <a name="miscellaneous"></a>

**1 problems** — 🔴 Hard 1

| # | Title | Difficulty | Topics | Lang | File |
|---|-------|------------|--------|------|------|
| 1579 | [Remove Max Number of Edges to Keep Graph Fully Traversable](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/) | 🔴 Hard | Union-Find, Graph Theory | C++ | [1579-remove-max-number-of-edges-to-keep-graph-fully-traversable.cpp](miscellaneous/1579-remove-max-number-of-edges-to-keep-graph-fully-traversable.cpp) |

---

<p align="center">
  Solutions exported from LeetCode via GraphQL API · Organised by topic · Last updated June 2026
</p>