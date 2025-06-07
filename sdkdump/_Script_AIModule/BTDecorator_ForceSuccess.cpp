#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_ForceSuccess.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_ForceSuccess::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_ForceSuccess");
    return result;
}
