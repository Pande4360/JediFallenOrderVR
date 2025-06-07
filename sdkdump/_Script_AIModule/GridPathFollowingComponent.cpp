#include "..\FUObjectArray.hpp"
#include "GridPathFollowingComponent.hpp"
#include "NavLocalGridManager.hpp"
#include "PathFollowingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::GridPathFollowingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.GridPathFollowingComponent");
    return result;
}
_Script_AIModule::NavLocalGridManager*& _Script_AIModule::GridPathFollowingComponent::get_GridManager() {
    return *(_Script_AIModule::NavLocalGridManager**)((uintptr_t)this + 0x318);
}
