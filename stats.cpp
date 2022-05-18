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
        for(size_t x = 0; x < list.size(); ++x) {
            stat.average += list[x];
        }
        stat.average /= list.size();
    } else {
        stat.average = std::nan("");
        stat.max = std::nan("");
        stat.min = std::nan("");
    }
    return stat;
}
