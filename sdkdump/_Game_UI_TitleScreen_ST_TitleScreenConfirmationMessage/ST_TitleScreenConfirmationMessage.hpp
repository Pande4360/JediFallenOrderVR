#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_TitleScreen_ST_TitleScreenConfirmationMessage {
#pragma pack(push, 1)
struct ST_TitleScreenConfirmationMessage {
    private: char pad_0[0x38]; public:
    void* get_TitleText_2_9DC0D2DA4D5DD4D1FDD40991DB1BB191();
    void* get_BodyText_4_426C0FE84D068485892D26A54830235F();
    void* get_ConfirmAction_7_FBA8AA1D4C699D2FAE4D1E9276C9E5FF();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
