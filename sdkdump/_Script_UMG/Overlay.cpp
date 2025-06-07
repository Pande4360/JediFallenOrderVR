#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Overlay.hpp"
#include "OverlaySlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
_Script_CoreUObject::Class* _Script_UMG::Overlay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Overlay");
    return result;
}
_Script_UMG::OverlaySlot* _Script_UMG::Overlay::AddChildToOverlay(_Script_UMG::Widget* Content) {
    return;
}
