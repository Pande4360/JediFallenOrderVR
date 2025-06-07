#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "RsPhysicalAnimationMotorsStrengthModifier.hpp"
bool _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::get_bDoNotUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::set_bDoNotUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::get_CustomBlendCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationMotorsStrengthModifier");
    return result;
}
void* _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::get_HorizontalAxisType() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::get_HorizontalAxisRange() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorsStrengthModifier::get_VerticalAxisScale() {
    return *(float*)((uintptr_t)this + 0x18);
}
