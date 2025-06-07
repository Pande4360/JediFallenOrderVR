#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "SwAIController.hpp"
void _Script_SwGame::SwAIController::SetActiveFightLoopToInfinite(bool bIsInfinite) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIController");
    return result;
}
void _Script_SwGame::SwAIController::TriggerWildcardFightBonus() {
    return;
}
bool _Script_SwGame::SwAIController::IsActiveFightLoopInfinite() {
    return;
}
