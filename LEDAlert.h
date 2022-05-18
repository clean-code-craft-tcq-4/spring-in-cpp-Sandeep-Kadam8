#ifndef LEDALERT_H_
#define LEDALERT_H_

#include "IAlerter.h"

class LEDAlert: public IAlerter {
public:
    LEDAlert();
    virtual ~LEDAlert();
    void setAlert(bool state) override;

    bool ledGlows;
};

#endif /* LEDALERT_H_ */
