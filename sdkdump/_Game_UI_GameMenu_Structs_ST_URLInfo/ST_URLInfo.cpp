#include "..\FUObjectArray.hpp"
#include "ST_URLInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_WidgetFocusTarget_23_34DC962D45C17477903787BC0263F6CC() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_ButtonLabel_5_20834878447C3E0B7CDB08BD66702855() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_MetaTags_32_37FF3BEB4F607D109ED1E19952B47F4A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_URL_14_13C638B9454D27ECB17D929C95C3A978() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_LinkListOrder_8_9B99B9734F7ADFDEEFA38481B707D296() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_FeatureImage_17_C12B1B594F9F7EDD64ACE8A05DE48245() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_DebugOnly_44_7A9C11AE4CF29BCED9C62C8E8FF40FE4() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_WidgetToLoad_46_6A18DA2C482DF729D4CF51BC0B33A04C() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::set_DebugOnly_44_7A9C11AE4CF29BCED9C62C8E8FF40FE4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_ConsoleOnly_48_5B539B57430943203D81648B8D78B1DD() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::set_ConsoleOnly_48_5B539B57430943203D81648B8D78B1DD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::get_PCOnly_50_6CCAF2D4407D88EC68AEB1AFFE61B3F8() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::set_PCOnly_50_6CCAF2D4407D88EC68AEB1AFFE61B3F8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/GameMenu/Structs/ST_URLInfo.ST_URLInfo");
    return result;
}
