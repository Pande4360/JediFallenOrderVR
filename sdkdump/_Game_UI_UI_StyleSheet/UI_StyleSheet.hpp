#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_StyleSheet {
#pragma pack(push, 1)
struct UI_StyleSheet {
    private: char pad_0[0x170]; public:
    void* get_CopperFlat_3_05D3631F479B6CCBF0681BB643FFE59D();
    void* get_CopperLight_5_EE46FEF24B2F396FDEAE79836BC5D441();
    void* get_White_7_A78C6FA34B481390D1EC39A742568D27();
    void* get_Settings_Default_TextColor_27_275C31024DC39DC437D781BB243A775B();
    void* get_Settings_Highlight_TextColor_28_C755000046FE8074839C618C6BEFC13D();
    void* get_Settings_DefaultButton_TextColor_29_CB82C3EB4F67A4D0AAF1B9B208FD0891();
    void* get_Settings_HighlightButton_TextColor_30_C33D651040E10CBF33742BB2D7D66E80();
    void* get_Settings_SelectedButton_TextColor_31_D544503D4DE8C11D043BAEAD4A9CFB7B();
    void* get_CoolGreyLight_34_9BEEE5AE476CF22F49182A965B357C89();
    void* get_CoolGreyDark_36_183B45E44DD5C592A35654B52B113613();
    void* get_CoolGreyBright_39_8FC6C6364ED3567DA15BD5BA78136509();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
