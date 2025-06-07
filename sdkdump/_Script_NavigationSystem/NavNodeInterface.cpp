#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NavNodeInterface.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavNodeInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavNodeInterface");
    return result;
}
