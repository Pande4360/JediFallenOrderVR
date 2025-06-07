#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PostProcessVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::PostProcessVolume::get_Settings() {
    return (void*)((uintptr_t)this + 0x3a0);
}
float& _Script_Engine::PostProcessVolume::get_Priority() {
    return *(float*)((uintptr_t)this + 0x8b0);
}
float& _Script_Engine::PostProcessVolume::get_BlendRadius() {
    return *(float*)((uintptr_t)this + 0x8b4);
}
float& _Script_Engine::PostProcessVolume::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x8b8);
}
bool _Script_Engine::PostProcessVolume::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x8bc + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessVolume::set_bUnbound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x8bc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessVolume::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x8bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessVolume::get_bUnbound() {
    return (*(uint8_t*)((uintptr_t)this + 0x8bc + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::PostProcessVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PostProcessVolume");
    return result;
}
void _Script_Engine::PostProcessVolume::AddOrUpdateBlendable(void* InBlendableObject, float InWeight) {
    return;
}
