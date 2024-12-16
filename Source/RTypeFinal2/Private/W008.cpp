#include "W008.h"
#include "Components/StaticMeshComponent.h"

AW008::AW008(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = NULL;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_BODY->SetupAttachment(RootComponent);
}


