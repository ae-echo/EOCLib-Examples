
#include "EOCTypes.h"
#include "EOCLib.h"
#include <iostream>

int main()
{
    int result = EOC_AfDriftCalibration();
    if (result != 0)
    {
        std::cerr << "AF Drift Calibration failed! Error code: " << result << std::endl;
        return result;
    }

    result = EOC_AfDriftVerify();
    if (result != 0)
    {
        std::cerr << "AF Drift Verification failed! Error code: " << result << std::endl;
        return result;
    }

    AfDriftCoeff* coeff = EOC_AfDriftGetCoeff();

    return 0;
}