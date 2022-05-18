#include "stats.h"
#include <algorithm>
#include <cmath>

Stats::Stats()
    :average{0}, max{0},min{0}
{

}

Stats Statistics::ComputeStatistics(const std::vector<float>& list) {
    Stats stat;
    if(!list.empty()) {
        stat.min = *std::min_element(list.begin(), list.end());
        stat.max = *std::max_element(list.begin(), list.end());
        for(int x = 0; x < list.size(); ++x) {
            stat.average += list[x];
        }
        stat.average /= list.size();
    } else {
        stat.average = std::nan(NULL);
        stat.max = std::nan(NULL);
        stat.min = std::nan(NULL);
    }
    return stat;
}
