#include "StatsAlerter.h"
#include <algorithm>

StatsAlerter::StatsAlerter(const float &threshold, std::vector<IAlerter*> &alerters)
    :m_threshold{threshold}, m_alerters{alerters}
{

}

StatsAlerter::~StatsAlerter() {

}

void StatsAlerter::checkAndAlert(const std::vector<float>& list) {
    auto max = *std::max_element(list.begin(), list.end());
    auto alert = (max > m_threshold);

    for(auto alterter: m_alerters) {
        alterter->setAlert(alert);
    }
}
