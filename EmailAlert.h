#ifndef EMAILALERT_H_
#define EMAILALERT_H_

#include "IAlerter.h"

class EmailAlert:public IAlerter
{
public:
    EmailAlert();
    virtual ~EmailAlert();
    void setAlert(bool state) override;

    bool emailSent;
};

#endif /* EMAILALERT_H_ */
