#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CullDistanceVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::CullDistanceVolume::get_CullDistances() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Engine::CullDistanceVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CullDistanceVolume");
    return result;
}
void _Script_Engine::CullDistanceVolume::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CullDistanceVolume::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
