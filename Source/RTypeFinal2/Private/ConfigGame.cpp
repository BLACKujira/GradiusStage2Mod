#include "ConfigGame.h"

UConfigGame::UConfigGame() {
    this->FlagNumberMax = 32768;
    this->CreditMaxTable.AddDefaulted(6);
    this->GameCompetition.AddDefaulted(2);
    this->ScoreBiasDifficulty.AddDefaulted(7);
    this->ScoreBiasPlayerLevel.AddDefaulted(12);
    this->GameSlowBias = 0.50f;
    this->GameSlowRecoveryTime = 1.00f;
    this->KeyDataPath.AddDefaulted(6);
}


