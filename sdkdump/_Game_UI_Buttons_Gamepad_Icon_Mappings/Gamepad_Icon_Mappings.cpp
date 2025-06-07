#include "..\FUObjectArray.hpp"
#include "Gamepad_Icon_Mappings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_Buttons_Gamepad_Icon_Mappings::Gamepad_Icon_Mappings::get_XboxButtons_10_CCAF377041CFD524F4FB8786372A4836() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_UI_Buttons_Gamepad_Icon_Mappings::Gamepad_Icon_Mappings::get_DualshockButtons_12_236FC24E4C947D779D9EB781A9EE9094() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Game_UI_Buttons_Gamepad_Icon_Mappings::Gamepad_Icon_Mappings::get_KeyboardButtons_17_8051FAFA4A929237BA1B04810B77EB1C() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Game_UI_Buttons_Gamepad_Icon_Mappings::Gamepad_Icon_Mappings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/Buttons/Gamepad_Icon_Mappings.Gamepad_Icon_Mappings");
    return result;
}
