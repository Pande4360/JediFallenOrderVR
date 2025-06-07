#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BillboardComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
#include "SceneComponent.hpp"
_Script_Engine::BillboardComponent*& _Script_Engine::ReflectionCaptureComponent::get_CaptureOffsetComponent() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::ReflectionCaptureComponent::get_Brightness() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::ReflectionCaptureComponent::get_ReflectionSourceType() {
    return (void*)((uintptr_t)this + 0x2d0);
}
float& _Script_Engine::ReflectionCaptureComponent::get_SourceCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
void* _Script_Engine::ReflectionCaptureComponent::get_CaptureOffset() {
    return (void*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::ReflectionCaptureComponent::get_FadeScreenSize() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_Engine::ReflectionCaptureComponent::get_FadeScreenSizeStart() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::ReflectionCaptureComponent::get_NearPlaneDistance() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
bool _Script_Engine::ReflectionCaptureComponent::get_bCaptureFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 1 != 0;
}
void _Script_Engine::ReflectionCaptureComponent::set_bCaptureFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ReflectionCaptureComponent::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x2f5);
}
void* _Script_Engine::ReflectionCaptureComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Script_Engine::ReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReflectionCaptureComponent");
    return result;
}
