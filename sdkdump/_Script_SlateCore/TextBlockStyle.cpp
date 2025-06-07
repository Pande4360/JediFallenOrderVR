#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "TextBlockStyle.hpp"
void* _Script_SlateCore::TextBlockStyle::get_Font() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::TextBlockStyle::get_UnderlineBrush() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_SlateCore::TextBlockStyle::get_HighlightColor() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_SlateCore::TextBlockStyle::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SlateCore::TextBlockStyle::get_HighlightShape() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_SlateCore::TextBlockStyle::get_ShadowOffset() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SlateCore::TextBlockStyle::get_ShadowColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::TextBlockStyle::get_SelectedBackgroundColor() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_SlateCore::TextBlockStyle::get_Tracking() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
_Script_CoreUObject::Class* _Script_SlateCore::TextBlockStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.TextBlockStyle");
    return result;
}
