#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavArea.hpp"
#include "NavArea_Default.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavArea_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavArea_Default");
    return result;
}
