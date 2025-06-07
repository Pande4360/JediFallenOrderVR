#include "..\FUObjectArray.hpp"
#include "UI_GamepadIcons_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_UMG\Image.hpp"
void _Game_UI_UI_GamepadIcons::UI_GamepadIcons_C::Set_Gamepad_Icon(_Script_UMG::Image* ImageBrush, _Script_InputCore::Key GamepadButton, bool ForceGamepadIcon, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_UI_GamepadIcons::UI_GamepadIcons_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/UI_GamepadIcons.UI_GamepadIcons_C");
    return result;
}
