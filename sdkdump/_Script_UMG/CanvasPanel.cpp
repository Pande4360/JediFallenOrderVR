#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CanvasPanel.hpp"
#include "CanvasPanelSlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
_Script_CoreUObject::Class* _Script_UMG::CanvasPanel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.CanvasPanel");
    return result;
}
_Script_UMG::CanvasPanelSlot* _Script_UMG::CanvasPanel::AddChildToCanvas(_Script_UMG::Widget* Content) {
    return;
}
