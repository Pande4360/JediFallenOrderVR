#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "CurveBase.hpp"
#include "CurveLinearColor.hpp"
void* _Script_Engine::CurveLinearColor::get_FloatCurves() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::CurveLinearColor::get_AdjustVibrance() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::CurveLinearColor::get_AdjustHue() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
float& _Script_Engine::CurveLinearColor::get_AdjustBrightnessCurve() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_Engine::CurveLinearColor::get_AdjustSaturation() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_Engine::CurveLinearColor::get_AdjustMaxAlpha() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::CurveLinearColor::get_AdjustBrightness() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::CurveLinearColor::get_AdjustMinAlpha() {
    return *(float*)((uintptr_t)this + 0x204);
}
_Script_CoreUObject::Class* _Script_Engine::CurveLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveLinearColor");
    return result;
}
_Script_CoreUObject::LinearColor _Script_Engine::CurveLinearColor::GetLinearColorValue(float InTime) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::CurveLinearColor::GetClampedLinearColorValue(float InTime) {
    return;
}
