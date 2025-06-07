#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimitiveComponent.hpp"
#include "RsDirectionalShadowVolumeComponent.hpp"
float& _Script_Engine::RsDirectionalShadowVolumeComponent::get_UnitsPerPixel() {
    return *(float*)((uintptr_t)this + 0xb28);
}
float& _Script_Engine::RsDirectionalShadowVolumeComponent::get_DepthBias() {
    return *(float*)((uintptr_t)this + 0xb2c);
}
void _Script_Engine::RsDirectionalShadowVolumeComponent::set_bInteriorNoShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RsDirectionalShadowVolumeComponent::get_EdgeFade() {
    return *(float*)((uintptr_t)this + 0xb30);
}
bool _Script_Engine::RsDirectionalShadowVolumeComponent::get_bInteriorNoShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0xb34 + 0)) & 1 != 0;
}
void* _Script_Engine::RsDirectionalShadowVolumeComponent::get_CalculatedResolution() {
    return (void*)((uintptr_t)this + 0xb38);
}
_Script_CoreUObject::Class* _Script_Engine::RsDirectionalShadowVolumeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsDirectionalShadowVolumeComponent");
    return result;
}
