#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_GamepadIcons {
#pragma pack(push, 1)
struct UI_GamepadIcons_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void Set_Gamepad_Icon(_Script_UMG::Image* ImageBrush, _Script_InputCore::Key GamepadButton, bool ForceGamepadIcon, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
