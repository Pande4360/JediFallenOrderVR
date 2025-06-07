#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HorizontalBox.hpp"
#include "HorizontalBoxSlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
_Script_CoreUObject::Class* _Script_UMG::HorizontalBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.HorizontalBox");
    return result;
}
_Script_UMG::HorizontalBoxSlot* _Script_UMG::HorizontalBox::AddChildToHorizontalBox(_Script_UMG::Widget* Content) {
    return;
}
