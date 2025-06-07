#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnActionEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::PawnAction*& _Script_AIModule::PawnActionEvent::get_Action() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnActionEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.PawnActionEvent");
    return result;
}
