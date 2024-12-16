#include "SafeGameInstanceSubsystem.h"

USafeGameInstanceSubsystem::USafeGameInstanceSubsystem() {
    this->HideGameGuard = true;
    this->AllowDebugging = true;
    this->ScannerInterval = 30;
}

void USafeGameInstanceSubsystem::HideGameGuardConsole(bool Set) {
}


