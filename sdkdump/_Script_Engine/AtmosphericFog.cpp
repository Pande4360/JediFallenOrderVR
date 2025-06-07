#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AtmosphericFog.hpp"
#include "AtmosphericFogComponent.hpp"
#include "Info.hpp"
_Script_Engine::AtmosphericFogComponent*& _Script_Engine::AtmosphericFog::get_AtmosphericFogComponent() {
    return *(_Script_Engine::AtmosphericFogComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::AtmosphericFog::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AtmosphericFog");
    return result;
}
