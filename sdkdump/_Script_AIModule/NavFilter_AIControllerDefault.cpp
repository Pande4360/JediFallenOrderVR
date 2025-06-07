#include "..\FUObjectArray.hpp"
#include "NavFilter_AIControllerDefault.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\NavigationQueryFilter.hpp"
_Script_CoreUObject::Class* _Script_AIModule::NavFilter_AIControllerDefault::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.NavFilter_AIControllerDefault");
    return result;
}
