#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "RsEllipse.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Script_RsTechRT::RsEllipse::get_StartColor() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_RsTechRT::RsEllipse::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_RsTechRT::RsEllipse::get_StartAngle() {
    return *(float*)((uintptr_t)this + 0x190);
}
void* _Script_RsTechRT::RsEllipse::get_EndAngleDelegate() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_RsTechRT::RsEllipse::get_StartAngleDelegate() {
    return (void*)((uintptr_t)this + 0x198);
}
float& _Script_RsTechRT::RsEllipse::get_EndAngle() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Script_RsTechRT::RsEllipse::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void* _Script_RsTechRT::RsEllipse::get_ThicknessDelegate() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsTechRT::RsEllipse::get_StartColorDelegate() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_RsTechRT::RsEllipse::get_EndColor() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_RsTechRT::RsEllipse::get_EndColorDelegate() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsEllipse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsEllipse");
    return result;
}
void _Script_RsTechRT::RsEllipse::SetThickness(float InThickness) {
    return;
}
void _Script_RsTechRT::RsEllipse::SetStartColor(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void _Script_RsTechRT::RsEllipse::SetStartAngle(float InStartAngle) {
    return;
}
void _Script_RsTechRT::RsEllipse::SetEndColor(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void _Script_RsTechRT::RsEllipse::SetEndAngle(float InEndAngle) {
    return;
}
