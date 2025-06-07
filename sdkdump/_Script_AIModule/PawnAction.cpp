#include "..\FUObjectArray.hpp"
#include "BrainComponent.hpp"
#include "PawnAction.hpp"
#include "PawnActionsComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void _Script_AIModule::PawnAction::set_bReplaceActiveSameClassInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnAction::get_ChildAction() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x28);
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnAction::get_ParentAction() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Object*& _Script_AIModule::PawnAction::get_Instigator() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x40);
}
_Script_AIModule::PawnActionsComponent*& _Script_AIModule::PawnAction::get_OwnerComponent() {
    return *(_Script_AIModule::PawnActionsComponent**)((uintptr_t)this + 0x38);
}
_Script_AIModule::BrainComponent*& _Script_AIModule::PawnAction::get_BrainComp() {
    return *(_Script_AIModule::BrainComponent**)((uintptr_t)this + 0x48);
}
bool _Script_AIModule::PawnAction::get_bReplaceActiveSameClassInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
bool _Script_AIModule::PawnAction::get_bAllowNewSameClassInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_AIModule::PawnAction::set_bAllowNewSameClassInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::PawnAction::get_bShouldPauseMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
void _Script_AIModule::PawnAction::set_bShouldPauseMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::PawnAction::get_bAlwaysNotifyOnFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 8 != 0;
}
void _Script_AIModule::PawnAction::set_bAlwaysNotifyOnFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction");
    return result;
}
void* _Script_AIModule::PawnAction::GetActionPriority() {
    return;
}
void _Script_AIModule::PawnAction::Finish(void* WithResult) {
    return;
}
_Script_AIModule::PawnAction* _Script_AIModule::PawnAction::CreateActionInstance(_Script_CoreUObject::Object* WorldContextObject, void* ActionClass) {
    return;
}
