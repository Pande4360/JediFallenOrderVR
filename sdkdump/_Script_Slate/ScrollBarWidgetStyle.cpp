#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScrollBarWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
void* _Script_Slate::ScrollBarWidgetStyle::get_ScrollBarStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Slate::ScrollBarWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.ScrollBarWidgetStyle");
    return result;
}
