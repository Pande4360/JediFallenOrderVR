#include "..\FUObjectArray.hpp"
#include "BTTask_PawnActionBase.hpp"
#include "BTTask_PushPawnAction.hpp"
#include "PawnAction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::PawnAction*& _Script_AIModule::BTTask_PushPawnAction::get_Action() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_PushPawnAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_PushPawnAction");
    return result;
}
