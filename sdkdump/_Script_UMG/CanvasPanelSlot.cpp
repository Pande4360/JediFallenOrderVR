#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Slate\Anchors.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "AnchorData.hpp"
#include "CanvasPanelSlot.hpp"
#include "PanelSlot.hpp"
void* _Script_UMG::CanvasPanelSlot::get_LayoutData() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_UMG::CanvasPanelSlot::get_bAutoSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_UMG::CanvasPanelSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.CanvasPanelSlot");
    return result;
}
void _Script_UMG::CanvasPanelSlot::set_bAutoSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::CanvasPanelSlot::SetPosition(_Script_CoreUObject::Vector2D InPosition) {
    return;
}
int32_t& _Script_UMG::CanvasPanelSlot::get_ZOrder() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
void _Script_UMG::CanvasPanelSlot::SetZOrder(int32_t InZOrder) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetSize(_Script_CoreUObject::Vector2D InSize) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetOffsets(_Script_SlateCore::Margin InOffset) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetMinimum(_Script_CoreUObject::Vector2D InMinimumAnchors) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetMaximum(_Script_CoreUObject::Vector2D InMaximumAnchors) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetLayout(_Script_UMG::AnchorData& InLayoutData) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetAnchors(_Script_Slate::Anchors InAnchors) {
    return;
}
void _Script_UMG::CanvasPanelSlot::SetAlignment(_Script_CoreUObject::Vector2D InAlignment) {
    return;
}
int32_t _Script_UMG::CanvasPanelSlot::GetZOrder() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::CanvasPanelSlot::GetSize() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::CanvasPanelSlot::GetPosition() {
    return;
}
_Script_SlateCore::Margin _Script_UMG::CanvasPanelSlot::GetOffsets() {
    return;
}
_Script_UMG::AnchorData _Script_UMG::CanvasPanelSlot::GetLayout() {
    return;
}
bool _Script_UMG::CanvasPanelSlot::GetAutoSize() {
    return;
}
_Script_Slate::Anchors _Script_UMG::CanvasPanelSlot::GetAnchors() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::CanvasPanelSlot::GetAlignment() {
    return;
}
