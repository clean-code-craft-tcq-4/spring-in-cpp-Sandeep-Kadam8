#include <vector>

class Stats;
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}

class Stats {
public:
    Stats();
    double average, max, min;

};
