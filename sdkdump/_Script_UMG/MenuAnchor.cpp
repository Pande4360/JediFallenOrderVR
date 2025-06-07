#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ContentWidget.hpp"
#include "MenuAnchor.hpp"
void _Script_UMG::MenuAnchor::set_ShouldDeferPaintingAfterWindowContent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x131 + 0);
    *(uint8_t*)((uintptr_t)this + 0x131 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MenuAnchor::get_MenuClass() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::MenuAnchor::get_OnGetMenuContentEvent() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::MenuAnchor::get_Placement() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_UMG::MenuAnchor::ToggleOpen(bool bFocusOnOpen) {
    return;
}
void _Script_UMG::MenuAnchor::set_UseApplicationMenuStack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x132 + 0);
    *(uint8_t*)((uintptr_t)this + 0x132 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MenuAnchor::get_ShouldDeferPaintingAfterWindowContent() {
    return (*(uint8_t*)((uintptr_t)this + 0x131 + 0)) & 1 != 0;
}
bool _Script_UMG::MenuAnchor::get_UseApplicationMenuStack() {
    return (*(uint8_t*)((uintptr_t)this + 0x132 + 0)) & 1 != 0;
}
void* _Script_UMG::MenuAnchor::get_OnMenuOpenChanged() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_UMG::MenuAnchor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MenuAnchor");
    return result;
}
bool _Script_UMG::MenuAnchor::ShouldOpenDueToClick() {
    return;
}
void _Script_UMG::MenuAnchor::Open(bool bFocusMenu) {
    return;
}
bool _Script_UMG::MenuAnchor::IsOpen() {
    return;
}
bool _Script_UMG::MenuAnchor::HasOpenSubMenus() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::MenuAnchor::GetMenuPosition() {
    return;
}
void _Script_UMG::MenuAnchor::Close() {
    return;
}
