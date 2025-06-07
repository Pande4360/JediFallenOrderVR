#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelSlot.hpp"
#include "PanelWidget.hpp"
#include "Visual.hpp"
#include "Widget.hpp"
_Script_UMG::PanelWidget*& _Script_UMG::PanelSlot::get_Parent() {
    return *(_Script_UMG::PanelWidget**)((uintptr_t)this + 0x28);
}
_Script_UMG::Widget*& _Script_UMG::PanelSlot::get_Content() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_UMG::PanelSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.PanelSlot");
    return result;
}
