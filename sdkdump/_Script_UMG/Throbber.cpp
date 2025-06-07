#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "Throbber.hpp"
#include "Widget.hpp"
int32_t& _Script_UMG::Throbber::get_NumberOfPieces() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
bool _Script_UMG::Throbber::get_bAnimateOpacity() {
    return (*(uint8_t*)((uintptr_t)this + 0x106 + 0)) & 1 != 0;
}
bool _Script_UMG::Throbber::get_bAnimateHorizontally() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
void _Script_UMG::Throbber::set_bAnimateHorizontally(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Throbber::get_bAnimateVertically() {
    return (*(uint8_t*)((uintptr_t)this + 0x105 + 0)) & 1 != 0;
}
void _Script_UMG::Throbber::set_bAnimateVertically(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x105 + 0);
    *(uint8_t*)((uintptr_t)this + 0x105 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::Throbber::get_PieceImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x108);
}
void _Script_UMG::Throbber::set_bAnimateOpacity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x106 + 0);
    *(uint8_t*)((uintptr_t)this + 0x106 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::Throbber::get_Image() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_UMG::Throbber::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Throbber");
    return result;
}
void _Script_UMG::Throbber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    return;
}
void _Script_UMG::Throbber::SetAnimateVertically(bool bInAnimateVertically) {
    return;
}
void _Script_UMG::Throbber::SetAnimateOpacity(bool bInAnimateOpacity) {
    return;
}
void _Script_UMG::Throbber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
    return;
}
