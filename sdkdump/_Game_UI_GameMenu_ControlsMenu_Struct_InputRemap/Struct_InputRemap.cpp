#include "..\FUObjectArray.hpp"
#include "Struct_InputRemap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::set_IsPositiveAxis_34_E0DF2D804761B998479E57A3BEF26157(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_IsPositiveAxis_34_E0DF2D804761B998479E57A3BEF26157() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_LocalizedName_4_44B9E4D948B1E803970405BCD790F9D7() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_UnbindException_39_99D5566741DE8612868376952C7CCA60() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_Category_23_8EE2451941EDA56EF197EE8014E3B296() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_HardAlias_26_4380C855414A661C51478F9D22640D4F() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_isAxis_33_6C606971494CCE9EB58986A779D37561() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::set_isAxis_33_6C606971494CCE9EB58986A779D37561(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_CannotChangeDefault_36_FEEAF28449A0BA754481F684E1402A63() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::set_CannotChangeDefault_36_FEEAF28449A0BA754481F684E1402A63(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_PCOnly_38_5C11CA614F571F45709A0599BF6190D4() {
    return (*(uint8_t*)((uintptr_t)this + 0x43 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::set_PCOnly_38_5C11CA614F571F45709A0599BF6190D4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43 + 0);
    *(uint8_t*)((uintptr_t)this + 0x43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_UnlockLoadoutFlag_43_C0BD90DE4D65BCFBAF8E109A7B2BE412() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::get_UnlockSwapText_45_2CCEC5F94BD53E1025A696A1982F6FB4() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/GameMenu/ControlsMenu/Struct_InputRemap.Struct_InputRemap");
    return result;
}
