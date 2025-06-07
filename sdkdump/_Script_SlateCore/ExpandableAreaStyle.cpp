#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpandableAreaStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ExpandableAreaStyle::get_CollapsedImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ExpandableAreaStyle::get_ExpandedImage() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_SlateCore::ExpandableAreaStyle::get_RolloutAnimationSeconds() {
    return *(float*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_SlateCore::ExpandableAreaStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ExpandableAreaStyle");
    return result;
}
