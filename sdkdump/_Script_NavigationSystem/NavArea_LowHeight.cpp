#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavArea.hpp"
#include "NavArea_LowHeight.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavArea_LowHeight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavArea_LowHeight");
    return result;
}
