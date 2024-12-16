#include "BS007ThrustData.h"

FBS007ThrustData::FBS007ThrustData() {
    this->Index = 0;
    this->Timer = 0.00f;
    this->State = EBS007_THRUST::WAIT;
}

