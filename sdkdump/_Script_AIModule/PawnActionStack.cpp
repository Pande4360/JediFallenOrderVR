#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnActionStack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::PawnActionStack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.PawnActionStack");
    return result;
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnActionStack::get_TopAction() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x0);
}
