#include "E28Engine.h"

UE28Engine::UE28Engine() {
    this->ShaderComplexityColors.AddDefaulted(18);
    this->QuadComplexityColors.AddDefaulted(22);
    this->LightComplexityColors.AddDefaulted(22);
    this->StationaryLightOverlapColors.AddDefaulted(18);
    this->LODColorationColors.AddDefaulted(16);
    this->HLODColorationColors.AddDefaulted(14);
    this->StreamingAccuracyColors.AddDefaulted(10);
    this->StatColorMappings.AddDefaulted(6);
    this->ActiveGameNameRedirects.AddDefaulted(1);
    this->NetDriverDefinitions.AddDefaulted(1);
}


