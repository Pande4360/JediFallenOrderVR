#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_PawnActionBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTTask_PawnActionBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_PawnActionBase");
    return result;
}
