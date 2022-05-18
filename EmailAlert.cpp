#include "EmailAlert.h"

EmailAlert::EmailAlert()
    :emailSent{false}
{

}

EmailAlert::~EmailAlert() {

}

void EmailAlert::setAlert(bool state) {
    emailSent = state;
}
