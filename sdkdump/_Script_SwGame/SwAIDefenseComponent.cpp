#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "SwAIDefenseComponent.hpp"
void* _Script_SwGame::SwAIDefenseComponent::get_BlockEnter() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SwAIDefenseComponent::get_BlockBroken() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_SwGame::SwAIDefenseComponent::get_BlockOver() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIDefenseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIDefenseComponent");
    return result;
}
void _Script_SwGame::SwAIDefenseComponent::BlockContact(_Script_RsGameTechRT::RsCharacter* Attacker) {
    return;
}
void _Script_SwGame::SwAIDefenseComponent::StartBlock(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* DefenseType) {
    return;
}
