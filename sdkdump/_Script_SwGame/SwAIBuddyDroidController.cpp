#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "SwAIBuddyDroidController.hpp"
#include "SwAIController.hpp"
void* _Script_SwGame::SwAIBuddyDroidController::get_OverchargeBehaviorTreeList() {
    return (void*)((uintptr_t)this + 0x868);
}
void* _Script_SwGame::SwAIBuddyDroidController::get_DefaultOverchargeBehaviorTreeAsset() {
    return (void*)((uintptr_t)this + 0x848);
}
void* _Script_SwGame::SwAIBuddyDroidController::get_OnBuddyStartWaitingForActionKey() {
    return (void*)((uintptr_t)this + 0x878);
}
_Script_AIModule::BehaviorTree*& _Script_SwGame::SwAIBuddyDroidController::get_DefaultOverchargeBehaviorTree() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x860);
}
void* _Script_SwGame::SwAIBuddyDroidController::get_OnBuddyEndWaitingForActionKey() {
    return (void*)((uintptr_t)this + 0x888);
}
void _Script_SwGame::SwAIBuddyDroidController::ResetActionKeySignal() {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIBuddyDroidController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIBuddyDroidController");
    return result;
}
void _Script_SwGame::SwAIBuddyDroidController::SignalDroidForAction() {
    return;
}
bool _Script_SwGame::SwAIBuddyDroidController::IsWaitingForActionKeySignal() {
    return;
}
void _Script_SwGame::SwAIBuddyDroidController::ExecuteOverchargeBehavior(_Script_RsGameTechRT::RsCharacter* OverchargeTarget) {
    return;
}
