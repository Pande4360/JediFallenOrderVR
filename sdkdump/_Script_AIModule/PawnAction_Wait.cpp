#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnAction_Wait.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::PawnAction_Wait::get_TimeToWait() {
    return *(float*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnAction_Wait::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction_Wait");
    return result;
}
