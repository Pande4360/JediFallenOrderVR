#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextBlockWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
void* _Script_Slate::TextBlockWidgetStyle::get_TextBlockStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Slate::TextBlockWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.TextBlockWidgetStyle");
    return result;
}
