#include "BS703MoveCommand.h"

FBS703MoveCommand::FBS703MoveCommand() {
    this->CommandA = EBS703_MOVECOMMAND::Move;
    this->CommandB = EBS703_MOVECOMMAND::Move;
    this->CommandC = EBS703_MOVECOMMAND::Move;
}

