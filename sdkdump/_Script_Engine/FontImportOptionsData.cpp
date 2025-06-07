#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FontImportOptionsData.hpp"
void* _Script_Engine::FontImportOptionsData::get_FontName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::FontImportOptionsData::set_bEnableBold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::FontImportOptionsData::set_bEnableDropShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::FontImportOptionsData::get_Height() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_Engine::FontImportOptionsData::set_bEnableAntialiasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::FontImportOptionsData::get_bEnableAntialiasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
bool _Script_Engine::FontImportOptionsData::get_bEnableBold() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 2 != 0;
}
bool _Script_Engine::FontImportOptionsData::get_bUseDistanceFieldAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
bool _Script_Engine::FontImportOptionsData::get_bEnableItalic() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 4 != 0;
}
void _Script_Engine::FontImportOptionsData::set_bEnableItalic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::FontImportOptionsData::get_bEnableUnderline() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 8 != 0;
}
void _Script_Engine::FontImportOptionsData::set_bEnableUnderline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::FontImportOptionsData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FontImportOptionsData");
    return result;
}
bool _Script_Engine::FontImportOptionsData::get_bAlphaOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 16 != 0;
}
void* _Script_Engine::FontImportOptionsData::get_UnicodeRange() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::FontImportOptionsData::set_bAlphaOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::FontImportOptionsData::get_bEnableLegacyMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void* _Script_Engine::FontImportOptionsData::get_CharacterSet() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::FontImportOptionsData::get_Chars() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::FontImportOptionsData::get_CharsFilePath() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::FontImportOptionsData::get_ExtendBoxLeft() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
bool _Script_Engine::FontImportOptionsData::get_bCreatePrintableOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void* _Script_Engine::FontImportOptionsData::get_CharsFileWildcard() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Engine::FontImportOptionsData::set_bCreatePrintableOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::FontImportOptionsData::get_bIncludeASCIIRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
void _Script_Engine::FontImportOptionsData::set_bIncludeASCIIRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::FontImportOptionsData::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x64);
}
bool _Script_Engine::FontImportOptionsData::get_bEnableDropShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::FontImportOptionsData::get_TexturePageWidth() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
int32_t& _Script_Engine::FontImportOptionsData::get_TexturePageMaxHeight() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
int32_t& _Script_Engine::FontImportOptionsData::get_XPadding() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
int32_t& _Script_Engine::FontImportOptionsData::get_YPadding() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_Engine::FontImportOptionsData::get_ExtendBoxTop() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
int32_t& _Script_Engine::FontImportOptionsData::get_ExtendBoxBottom() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
int32_t& _Script_Engine::FontImportOptionsData::get_ExtendBoxRight() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
void _Script_Engine::FontImportOptionsData::set_bEnableLegacyMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::FontImportOptionsData::get_Kerning() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
void _Script_Engine::FontImportOptionsData::set_bUseDistanceFieldAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::FontImportOptionsData::get_DistanceFieldScaleFactor() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
float& _Script_Engine::FontImportOptionsData::get_DistanceFieldScanRadiusScale() {
    return *(float*)((uintptr_t)this + 0xa8);
}
