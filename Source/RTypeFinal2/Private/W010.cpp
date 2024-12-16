#include "W010.h"
#include "Components/StaticMeshComponent.h"

AW010::AW010(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = NULL;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Bitp = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
}


