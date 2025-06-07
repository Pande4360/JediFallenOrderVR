#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DecalComponent.hpp"
#include "MaterialInterface.hpp"
#include "PrimitiveComponent.hpp"
float& _Script_Engine::DecalComponent::get_FadeDuration() {
    return *(float*)((uintptr_t)this + 0xb3c);
}
float& _Script_Engine::DecalComponent::get_FadeScreenSize() {
    return *(float*)((uintptr_t)this + 0xb34);
}
_Script_Engine::MaterialInterface*& _Script_Engine::DecalComponent::get_DecalMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xb28);
}
float& _Script_Engine::DecalComponent::get_FadeInStartDelay() {
    return *(float*)((uintptr_t)this + 0xb44);
}
int32_t& _Script_Engine::DecalComponent::get_SortOrder() {
    return *(int32_t*)((uintptr_t)this + 0xb30);
}
float& _Script_Engine::DecalComponent::get_FadeStartDelay() {
    return *(float*)((uintptr_t)this + 0xb38);
}
float _Script_Engine::DecalComponent::GetFadeInDuration() {
    return;
}
float& _Script_Engine::DecalComponent::get_FadeInDuration() {
    return *(float*)((uintptr_t)this + 0xb40);
}
bool _Script_Engine::DecalComponent::get_bDestroyOwnerAfterFade() {
    return (*(uint8_t*)((uintptr_t)this + 0xb48 + 0)) & 1 != 0;
}
void _Script_Engine::DecalComponent::set_bDestroyOwnerAfterFade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb48 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DecalComponent::get_DecalSize() {
    return (void*)((uintptr_t)this + 0xb4c);
}
_Script_CoreUObject::Class* _Script_Engine::DecalComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DecalComponent");
    return result;
}
void _Script_Engine::DecalComponent::SetSortOrder(int32_t Value) {
    return;
}
void _Script_Engine::DecalComponent::SetFadeScreenSize(float NewFadeScreenSize) {
    return;
}
void _Script_Engine::DecalComponent::SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade) {
    return;
}
void _Script_Engine::DecalComponent::SetFadeIn(float StartDelay, float Duaration) {
    return;
}
void _Script_Engine::DecalComponent::SetDecalMaterial(_Script_Engine::MaterialInterface* NewDecalMaterial) {
    return;
}
float _Script_Engine::DecalComponent::GetFadeStartDelay() {
    return;
}
float _Script_Engine::DecalComponent::GetFadeInStartDelay() {
    return;
}
float _Script_Engine::DecalComponent::GetFadeDuration() {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::DecalComponent::GetDecalMaterial() {
    return;
}
