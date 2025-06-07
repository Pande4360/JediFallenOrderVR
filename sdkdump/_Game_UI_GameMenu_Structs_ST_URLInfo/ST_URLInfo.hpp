#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Structs_ST_URLInfo {
#pragma pack(push, 1)
struct ST_URLInfo {
    private: char pad_0[0x80]; public:
    void* get_ButtonLabel_5_20834878447C3E0B7CDB08BD66702855();
    int32_t& get_LinkListOrder_8_9B99B9734F7ADFDEEFA38481B707D296();
    void* get_URL_14_13C638B9454D27ECB17D929C95C3A978();
    void* get_FeatureImage_17_C12B1B594F9F7EDD64ACE8A05DE48245();
    void* get_WidgetToLoad_46_6A18DA2C482DF729D4CF51BC0B33A04C();
    void* get_WidgetFocusTarget_23_34DC962D45C17477903787BC0263F6CC();
    void* get_MetaTags_32_37FF3BEB4F607D109ED1E19952B47F4A();
    bool get_DebugOnly_44_7A9C11AE4CF29BCED9C62C8E8FF40FE4();
    void set_DebugOnly_44_7A9C11AE4CF29BCED9C62C8E8FF40FE4(bool value);
    bool get_ConsoleOnly_48_5B539B57430943203D81648B8D78B1DD();
    void set_ConsoleOnly_48_5B539B57430943203D81648B8D78B1DD(bool value);
    bool get_PCOnly_50_6CCAF2D4407D88EC68AEB1AFFE61B3F8();
    void set_PCOnly_50_6CCAF2D4407D88EC68AEB1AFFE61B3F8(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
