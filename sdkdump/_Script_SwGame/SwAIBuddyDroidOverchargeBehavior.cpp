#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAIBuddyDroidOverchargeBehavior.hpp"
void* _Script_SwGame::SwAIBuddyDroidOverchargeBehavior::get_BehaviorTreeAsset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwAIBuddyDroidOverchargeBehavior::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_AIModule::BehaviorTree*& _Script_SwGame::SwAIBuddyDroidOverchargeBehavior::get_BehaviorTree() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIBuddyDroidOverchargeBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwAIBuddyDroidOverchargeBehavior");
    return result;
}
