int searchInsert(vector<int>& nums, int target) {
         int l = 0, r = nums.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;   // insertion position
    }

initialize two pointers:

left = 0

right = n - 1

While left ≤ right, do:

Compute mid = left + (right - left) / 2

If nums[mid] == target, return mid

Else if nums[mid] < target, move search to right half:

left = mid + 1

Else, move search to left half:

right = mid - 1

If the loop ends and target is not found:

Return left as the insertion position
