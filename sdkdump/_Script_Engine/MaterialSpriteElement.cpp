#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "MaterialInterface.hpp"
#include "MaterialSpriteElement.hpp"
_Script_Engine::CurveFloat*& _Script_Engine::MaterialSpriteElement::get_DistanceToSizeCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x20);
}
_Script_Engine::MaterialInterface*& _Script_Engine::MaterialSpriteElement::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveFloat*& _Script_Engine::MaterialSpriteElement::get_DistanceToOpacityCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x8);
}
bool _Script_Engine::MaterialSpriteElement::get_bSizeIsInScreenSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialSpriteElement::set_bSizeIsInScreenSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MaterialSpriteElement::get_BaseSizeY() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::MaterialSpriteElement::get_BaseSizeX() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialSpriteElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialSpriteElement");
    return result;
}
