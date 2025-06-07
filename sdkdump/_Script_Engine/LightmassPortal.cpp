#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "LightmassPortal.hpp"
#include "LightmassPortalComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightmassPortal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightmassPortal");
    return result;
}
_Script_Engine::LightmassPortalComponent*& _Script_Engine::LightmassPortal::get_PortalComponent() {
    return *(_Script_Engine::LightmassPortalComponent**)((uintptr_t)this + 0x360);
}
