#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnAction_Repeat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::PawnAction*& _Script_AIModule::PawnAction_Repeat::get_ActionToRepeat() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x98);
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnAction_Repeat::get_RecentActionCopy() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0xa0);
}
void* _Script_AIModule::PawnAction_Repeat::get_ChildFailureHandlingMode() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnAction_Repeat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction_Repeat");
    return result;
}
