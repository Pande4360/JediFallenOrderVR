#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "PrimitiveComponent.hpp"
#include "ShapeComponent.hpp"
void _Script_Engine::ShapeComponent::set_bShouldCollideWhenPlacing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb34 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ShapeComponent::get_bShouldCollideWhenPlacing() {
    return (*(uint8_t*)((uintptr_t)this + 0xb34 + 0)) & 2 != 0;
}
_Script_Engine::BodySetup*& _Script_Engine::ShapeComponent::get_ShapeBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xb28);
}
bool _Script_Engine::ShapeComponent::get_bDynamicObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xb34 + 0)) & 4 != 0;
}
void* _Script_Engine::ShapeComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0xb52);
}
void* _Script_Engine::ShapeComponent::get_ShapeColor() {
    return (void*)((uintptr_t)this + 0xb30);
}
bool _Script_Engine::ShapeComponent::get_bDrawOnlyIfSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0xb34 + 0)) & 1 != 0;
}
void _Script_Engine::ShapeComponent::set_bDrawOnlyIfSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ShapeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ShapeComponent");
    return result;
}
void _Script_Engine::ShapeComponent::set_bDynamicObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb34 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb34 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ShapeComponent::get_AreaClass() {
    return (void*)((uintptr_t)this + 0xb38);
}
void* _Script_Engine::ShapeComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0xb40);
}
void* _Script_Engine::ShapeComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0xb48);
}
void* _Script_Engine::ShapeComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0xb50);
}
void* _Script_Engine::ShapeComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0xb51);
}
bool _Script_Engine::ShapeComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xb78 + 0)) & 1 != 0;
}
void _Script_Engine::ShapeComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb78 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
