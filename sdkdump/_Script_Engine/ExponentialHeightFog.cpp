#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExponentialHeightFog.hpp"
#include "ExponentialHeightFogComponent.hpp"
#include "Info.hpp"
_Script_Engine::ExponentialHeightFogComponent*& _Script_Engine::ExponentialHeightFog::get_Component() {
    return *(_Script_Engine::ExponentialHeightFogComponent**)((uintptr_t)this + 0x360);
}
bool _Script_Engine::ExponentialHeightFog::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFog::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ExponentialHeightFog::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ExponentialHeightFog");
    return result;
}
void _Script_Engine::ExponentialHeightFog::OnRep_bEnabled() {
    return;
}
