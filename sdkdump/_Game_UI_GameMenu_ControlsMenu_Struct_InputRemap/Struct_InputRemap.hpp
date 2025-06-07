#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap {
#pragma pack(push, 1)
struct Struct_InputRemap {
    private: char pad_0[0x60]; public:
    void* get_LocalizedName_4_44B9E4D948B1E803970405BCD790F9D7();
    void* get_Category_23_8EE2451941EDA56EF197EE8014E3B296();
    void* get_HardAlias_26_4380C855414A661C51478F9D22640D4F();
    void* get_UnbindException_39_99D5566741DE8612868376952C7CCA60();
    bool get_isAxis_33_6C606971494CCE9EB58986A779D37561();
    void set_isAxis_33_6C606971494CCE9EB58986A779D37561(bool value);
    bool get_IsPositiveAxis_34_E0DF2D804761B998479E57A3BEF26157();
    void set_IsPositiveAxis_34_E0DF2D804761B998479E57A3BEF26157(bool value);
    bool get_CannotChangeDefault_36_FEEAF28449A0BA754481F684E1402A63();
    void set_CannotChangeDefault_36_FEEAF28449A0BA754481F684E1402A63(bool value);
    bool get_PCOnly_38_5C11CA614F571F45709A0599BF6190D4();
    void set_PCOnly_38_5C11CA614F571F45709A0599BF6190D4(bool value);
    void* get_UnlockLoadoutFlag_43_C0BD90DE4D65BCFBAF8E109A7B2BE412();
    void* get_UnlockSwapText_45_2CCEC5F94BD53E1025A696A1982F6FB4();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
