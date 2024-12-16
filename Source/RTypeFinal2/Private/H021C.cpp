#include "H021C.h"
#include "Components/ChildActorComponent.h"

AH021C::AH021C(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CBody = CreateDefaultSubobject<UChildActorComponent>(TEXT("CBody"));
    this->CBody->SetupAttachment(RootComponent);
}


