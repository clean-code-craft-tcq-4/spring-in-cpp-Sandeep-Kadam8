#ifndef STATSALERTER_H_
#define STATSALERTER_H_

#include "IAlerter.h"
#include <vector>

class StatsAlerter {
public:
    StatsAlerter(const float &m_threshold, std::vector<IAlerter*> &m_alerters);
    virtual ~StatsAlerter();

    void checkAndAlert(const std::vector<float>& list);
private:
    float m_threshold;
    std::vector<IAlerter*> &m_alerters;
};

#endif /* STATSALERTER_H_ */
