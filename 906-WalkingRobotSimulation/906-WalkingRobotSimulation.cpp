// Last updated: 9/8/2026, 12:36:21 am
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<int> pos = {0, 0};
        int dir = 0;
        int max_dist = 0; // Added to track the maximum distance squared

        set<pair<int, int>> obs_set;
        for (auto& obs : obstacles) {
            obs_set.insert({obs[0], obs[1]});
        }

        for (int i : commands) {

            if (i != -1 && i != -2) {
                if (dir == 0) {
                    // North
                    for (int step = 0; step < i; step++) {
                        if (obs_set.count({pos[0], pos[1] + 1}))
                            break;
                        pos[1] += 1;
                    }
                } else if (dir == 1) {
                    // East
                    for (int step = 0; step < i; step++) {
                        if (obs_set.count({pos[0] + 1, pos[1]}))
                            break;
                        pos[0] += 1;
                    }
                } else if (dir == 2) {
                    // South
                    for (int step = 0; step < i; step++) {
                        if (obs_set.count({pos[0], pos[1] - 1}))
                            break;
                        pos[1] -= 1;
                    }
                } else if (dir == 3) {
                    // West
                    for (int step = 0; step < i; step++) {
                        if (obs_set.count({pos[0] - 1, pos[1]}))
                            break;
                        pos[0] -= 1;
                    }
                }

                // Update the maximum distance after every movement command
                // completes
                max_dist = max(max_dist, (pos[0] * pos[0]) + (pos[1] * pos[1]));
            } else if (i == -2) {
                if (dir == 0)
                    dir = 3;
                else
                    dir -= 1;
            } else if (i == -1) {
                if (dir == 3)
                    dir = 0;
                else
                    dir += 1;
            }
        }

        // Return the maximum distance encountered, not the final distance
        return max_dist;
    }
};