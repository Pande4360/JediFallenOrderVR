#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProgressBarStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ProgressBarStyle::get_FillImage() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::ProgressBarStyle::get_BackgroundImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ProgressBarStyle::get_MarqueeImage() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_SlateCore::ProgressBarStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ProgressBarStyle");
    return result;
}
