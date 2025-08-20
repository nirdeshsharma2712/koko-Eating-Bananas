# 📊 LeetCode Problem: Koko Eating Bananas

## 🧩 Problem Statement

**Koko** loves to eat **bananas**. There are `n` **piles of bananas**, the `ith` pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.
Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses **some pile** of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this **hour**.
Return the **minimum** integer `k` such that she can eat all the bananas within `h` hours.

> **Note :**
> - Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.



## 🧠 Approach: Binary Search

- Set your **search range** ->  `start = 0`, `end = max(piles)`
> While `start <= end`:
> - Find `mid = (start + end) / 2` (the candidate speed).
> - Traverse the piles array and **calculate** the **total hours** needed at this speed.
> - If `hours <= H` -> **valid speed**, update `ans = mid` and search for **smaller speed** `(end = mid - 1)`.
> - Else ->  not enough speed, so **increase** `(start = mid + 1)`.
> - At the end -> return **ans** as the `minimum speed!`



## ✅ Example Walkthrough

### Example 1

##### Input: piles = [3,6,7,11], h = 8
##### Output: 4


### Example 2

##### Input: piles = [30,11,23,4,20], h = 5
##### Output: 30


### Example 3

##### Input: piles = [30,11,23,4,20], h = 6
##### Output: 23


## 🛠️ Constraints

- `1 <= piles.length <= 10^4`
- `piles.length <= h <= 10^9`
- `1 <= piles[i] <= 10^9`
