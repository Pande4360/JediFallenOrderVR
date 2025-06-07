#include "..\FUObjectArray.hpp"
#include "PathFollowingManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AIModule::PathFollowingManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PathFollowingManager");
    return result;
}
