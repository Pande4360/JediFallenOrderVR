#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnAction_Sequence.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::PawnAction_Sequence::get_ChildFailureHandlingMode() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AIModule::PawnAction_Sequence::get_ActionSequence() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnAction_Sequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction_Sequence");
    return result;
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnAction_Sequence::get_RecentActionCopy() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0xb0);
}
