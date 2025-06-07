#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_ReachedMoveGoal.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_ReachedMoveGoal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_ReachedMoveGoal");
    return result;
}
