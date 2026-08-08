// Last updated: 9/8/2026, 12:37:05 am
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Use arrays of shorts (16-bit ints) to act as bitmasks
        // We need 9 masks for rows, 9 for cols, and 9 for boxes
        int rows[9] = {0}, cols[9] = {0}, boxes[9] = {0};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') continue;

                // Convert '1'-'9' to 0-8
                int val = board[r][c] - '1';
                int mask = 1 << val; // Create a bitmask (e.g., if val is 3, mask is 1000)

                // Determine which 3x3 box we are in (0-8)
                int boxIndex = (r / 3) * 3 + (c / 3);

                // Check if the bit is already set in any of the three categories
                if ((rows[r] & mask) || (cols[c] & mask) || (boxes[boxIndex] & mask)) {
                    return false;
                }

                // Mark the bit as seen using OR
                rows[r] |= mask;
                cols[c] |= mask;
                boxes[boxIndex] |= mask;
            }
        }
        return true;
    }
};