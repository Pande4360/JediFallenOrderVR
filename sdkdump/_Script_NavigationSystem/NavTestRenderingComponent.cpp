#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "NavTestRenderingComponent.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavTestRenderingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavTestRenderingComponent");
    return result;
}
