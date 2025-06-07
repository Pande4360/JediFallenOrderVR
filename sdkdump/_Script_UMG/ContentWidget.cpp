#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "PanelSlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
_Script_UMG::PanelSlot* _Script_UMG::ContentWidget::SetContent(_Script_UMG::Widget* Content) {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::ContentWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ContentWidget");
    return result;
}
_Script_UMG::PanelSlot* _Script_UMG::ContentWidget::GetContentSlot() {
    return;
}
_Script_UMG::Widget* _Script_UMG::ContentWidget::GetContent() {
    return;
}
