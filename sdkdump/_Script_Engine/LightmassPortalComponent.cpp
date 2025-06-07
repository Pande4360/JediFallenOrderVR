#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "LightmassPortalComponent.hpp"
#include "SceneComponent.hpp"
_Script_Engine::BoxComponent*& _Script_Engine::LightmassPortalComponent::get_PreviewBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassPortalComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightmassPortalComponent");
    return result;
}
