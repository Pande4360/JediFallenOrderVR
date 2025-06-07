#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimitiveComponent.hpp"
#include "VectorField.hpp"
#include "VectorFieldComponent.hpp"
float& _Script_Engine::VectorFieldComponent::get_Tightness() {
    return *(float*)((uintptr_t)this + 0xb34);
}
_Script_Engine::VectorField*& _Script_Engine::VectorFieldComponent::get_VectorField() {
    return *(_Script_Engine::VectorField**)((uintptr_t)this + 0xb28);
}
void _Script_Engine::VectorFieldComponent::set_bPreviewVectorField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::VectorFieldComponent::get_Intensity() {
    return *(float*)((uintptr_t)this + 0xb30);
}
bool _Script_Engine::VectorFieldComponent::get_bPreviewVectorField() {
    return (*(uint8_t*)((uintptr_t)this + 0xb38 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::VectorFieldComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorFieldComponent");
    return result;
}
void _Script_Engine::VectorFieldComponent::SetIntensity(float NewIntensity) {
    return;
}
