#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AbstractNavData.hpp"
#include "NavigationData.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::AbstractNavData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.AbstractNavData");
    return result;
}
