#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneComponent.hpp"
#include "WindDirectionalSourceComponent.hpp"
float& _Script_Engine::WindDirectionalSourceComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::WindDirectionalSourceComponent::get_Strength() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::WindDirectionalSourceComponent::get_Speed() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Script_Engine::WindDirectionalSourceComponent::get_MinGustAmount() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
void _Script_Engine::WindDirectionalSourceComponent::set_bPointWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::WindDirectionalSourceComponent::get_MaxGustAmount() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
bool _Script_Engine::WindDirectionalSourceComponent::get_bPointWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dc + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::WindDirectionalSourceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WindDirectionalSourceComponent");
    return result;
}
void _Script_Engine::WindDirectionalSourceComponent::SetWindType(void* InNewType) {
    return;
}
void _Script_Engine::WindDirectionalSourceComponent::SetStrength(float InNewStrength) {
    return;
}
void _Script_Engine::WindDirectionalSourceComponent::SetSpeed(float InNewSpeed) {
    return;
}
void _Script_Engine::WindDirectionalSourceComponent::SetRadius(float InNewRadius) {
    return;
}
void _Script_Engine::WindDirectionalSourceComponent::SetMinimumGustAmount(float InNewMinGust) {
    return;
}
void _Script_Engine::WindDirectionalSourceComponent::SetMaximumGustAmount(float InNewMaxGust) {
    return;
}
