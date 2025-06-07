#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelWidget.hpp"
#include "VerticalBox.hpp"
#include "VerticalBoxSlot.hpp"
#include "Widget.hpp"
_Script_CoreUObject::Class* _Script_UMG::VerticalBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.VerticalBox");
    return result;
}
_Script_UMG::VerticalBoxSlot* _Script_UMG::VerticalBox::AddChildToVerticalBox(_Script_UMG::Widget* Content) {
    return;
}
