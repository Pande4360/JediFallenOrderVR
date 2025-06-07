#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckCombatState.hpp"
#include "RsCharacter.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckCombatState::get_CombatState() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckCombatState::get_CombatStateMask() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckCombatState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckCombatState");
    return result;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckCombatState::OnCombatStateChanged(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState) {
    return;
}
