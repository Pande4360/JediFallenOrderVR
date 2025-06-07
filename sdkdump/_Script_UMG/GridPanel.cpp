#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GridPanel.hpp"
#include "GridSlot.hpp"
#include "PanelWidget.hpp"
#include "Widget.hpp"
void* _Script_UMG::GridPanel::get_ColumnFill() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_UMG::GridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient) {
    return;
}
void* _Script_UMG::GridPanel::get_RowFill() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_UMG::GridPanel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.GridPanel");
    return result;
}
void _Script_UMG::GridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient) {
    return;
}
_Script_UMG::GridSlot* _Script_UMG::GridPanel::AddChildToGrid(_Script_UMG::Widget* Content) {
    return;
}
