#include "LEDAlert.h"

LEDAlert::LEDAlert()
    :ledGlows{false}
{

}

LEDAlert::~LEDAlert() {

}

void LEDAlert::setAlert(bool state) {
    ledGlows = state;
}
