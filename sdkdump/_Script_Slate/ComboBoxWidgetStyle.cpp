#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComboBoxWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
void* _Script_Slate::ComboBoxWidgetStyle::get_ComboBoxStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Slate::ComboBoxWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.ComboBoxWidgetStyle");
    return result;
}
