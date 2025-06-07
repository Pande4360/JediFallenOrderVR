#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "TurnBasedMatchInterface.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystem::TurnBasedMatchInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystem.TurnBasedMatchInterface");
    return result;
}
void _Script_OnlineSubsystem::TurnBasedMatchInterface::OnMatchReceivedTurn(void* Match, bool bDidBecomeActive) {
    return;
}
void _Script_OnlineSubsystem::TurnBasedMatchInterface::OnMatchEnded(void* Match) {
    return;
}
