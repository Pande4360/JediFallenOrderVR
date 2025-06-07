#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "SizeBox.hpp"
void _Script_UMG::SizeBox::ClearMaxDesiredWidth() {
    return;
}
bool _Script_UMG::SizeBox::get_bOverride_MinDesiredWidth() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 4 != 0;
}
void _Script_UMG::SizeBox::set_bOverride_HeightOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_UMG::SizeBox::get_bOverride_WidthOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_UMG::SizeBox::set_bOverride_WidthOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::SizeBox::set_bOverride_MinDesiredHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_UMG::SizeBox::ClearHeightOverride() {
    return;
}
bool _Script_UMG::SizeBox::get_bOverride_HeightOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 2 != 0;
}
void _Script_UMG::SizeBox::set_bOverride_MinDesiredWidth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_UMG::SizeBox::get_bOverride_MinDesiredHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 8 != 0;
}
bool _Script_UMG::SizeBox::get_bOverride_MaxDesiredWidth() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 16 != 0;
}
void _Script_UMG::SizeBox::set_bOverride_MaxDesiredWidth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_UMG::SizeBox::get_bOverride_MaxDesiredHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 32 != 0;
}
void _Script_UMG::SizeBox::set_bOverride_MaxDesiredHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_UMG::SizeBox::get_bOverride_MaxAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 64 != 0;
}
void _Script_UMG::SizeBox::SetHeightOverride(float InHeightOverride) {
    return;
}
void _Script_UMG::SizeBox::set_bOverride_MaxAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_UMG::SizeBox::get_WidthOverride() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_UMG::SizeBox::get_HeightOverride() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_UMG::SizeBox::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_UMG::SizeBox::get_MinDesiredHeight() {
    return *(float*)((uintptr_t)this + 0x128);
}
float& _Script_UMG::SizeBox::get_MaxDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x12c);
}
float& _Script_UMG::SizeBox::get_MaxDesiredHeight() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_UMG::SizeBox::get_MaxAspectRatio() {
    return *(float*)((uintptr_t)this + 0x134);
}
_Script_CoreUObject::Class* _Script_UMG::SizeBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SizeBox");
    return result;
}
void _Script_UMG::SizeBox::SetWidthOverride(float InWidthOverride) {
    return;
}
void _Script_UMG::SizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
    return;
}
void _Script_UMG::SizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
    return;
}
void _Script_UMG::SizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
    return;
}
void _Script_UMG::SizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
    return;
}
void _Script_UMG::SizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
    return;
}
void _Script_UMG::SizeBox::ClearWidthOverride() {
    return;
}
void _Script_UMG::SizeBox::ClearMinDesiredWidth() {
    return;
}
void _Script_UMG::SizeBox::ClearMinDesiredHeight() {
    return;
}
void _Script_UMG::SizeBox::ClearMaxDesiredHeight() {
    return;
}
void _Script_UMG::SizeBox::ClearMaxAspectRatio() {
    return;
}
