#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\NavigationData.hpp"
#include "..\_Script_NavigationSystem\NavigationSystemV1.hpp"
#include "RsNavigationSystem.hpp"
_Script_NavigationSystem::NavigationData*& _Script_RsGameTechRT::RsNavigationSystem::get_FlyingAbstractNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNavigationSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNavigationSystem");
    return result;
}
