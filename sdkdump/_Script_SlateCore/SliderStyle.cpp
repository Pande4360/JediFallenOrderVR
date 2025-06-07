#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "SliderStyle.hpp"
float& _Script_SlateCore::SliderStyle::get_BarThickness() {
    return *(float*)((uintptr_t)this + 0x338);
}
void* _Script_SlateCore::SliderStyle::get_NormalBarImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SliderStyle::get_HoveredBarImage() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_SlateCore::SliderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SliderStyle");
    return result;
}
void* _Script_SlateCore::SliderStyle::get_DisabledBarImage() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SlateCore::SliderStyle::get_NormalThumbImage() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SlateCore::SliderStyle::get_HoveredThumbImage() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_SlateCore::SliderStyle::get_DisabledThumbImage() {
    return (void*)((uintptr_t)this + 0x2b0);
}
