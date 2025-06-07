#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Slate\InputChord.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct InputEvent;
}
namespace _Script_SlateCore {
struct AnalogInputEvent;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Script_SlateCore {
struct KeyEvent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetInputLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool PointerEvent_IsTouchEvent(_Script_SlateCore::PointerEvent& Input);
    bool PointerEvent_IsMouseButtonDown(_Script_SlateCore::PointerEvent& Input, _Script_InputCore::Key MouseButton);
    float PointerEvent_GetWheelDelta(_Script_SlateCore::PointerEvent& Input);
    int32_t PointerEvent_GetUserIndex(_Script_SlateCore::PointerEvent& Input);
    int32_t PointerEvent_GetTouchpadIndex(_Script_SlateCore::PointerEvent& Input);
    _Script_CoreUObject::Vector2D PointerEvent_GetScreenSpacePosition(_Script_SlateCore::PointerEvent& Input);
    int32_t PointerEvent_GetPointerIndex(_Script_SlateCore::PointerEvent& Input);
    _Script_CoreUObject::Vector2D PointerEvent_GetLastScreenSpacePosition(_Script_SlateCore::PointerEvent& Input);
    void* PointerEvent_GetGestureType(_Script_SlateCore::PointerEvent& Input);
    _Script_CoreUObject::Vector2D PointerEvent_GetGestureDelta(_Script_SlateCore::PointerEvent& Input);
    _Script_InputCore::Key PointerEvent_GetEffectingButton(_Script_SlateCore::PointerEvent& Input);
    _Script_CoreUObject::Vector2D PointerEvent_GetCursorDelta(_Script_SlateCore::PointerEvent& Input);
    bool Key_IsVectorAxis(_Script_InputCore::Key& Key);
    bool Key_IsValid(_Script_InputCore::Key& Key);
    bool Key_IsMouseButton(_Script_InputCore::Key& Key);
    bool Key_IsModifierKey(_Script_InputCore::Key& Key);
    bool Key_IsKeyboardKey(_Script_InputCore::Key& Key);
    bool Key_IsGamepadKey(_Script_InputCore::Key& Key);
    bool Key_IsFloatAxis(_Script_InputCore::Key& Key);
    void* Key_GetDisplayName(_Script_InputCore::Key& Key);
    bool InputEvent_IsShiftDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsRightShiftDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsRightControlDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsRightCommandDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsRightAltDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsRepeat(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsLeftShiftDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsLeftControlDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsLeftCommandDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsLeftAltDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsControlDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsCommandDown(_Script_SlateCore::InputEvent& Input);
    bool InputEvent_IsAltDown(_Script_SlateCore::InputEvent& Input);
    int32_t GetUserIndex(_Script_SlateCore::KeyEvent& Input);
    _Script_InputCore::Key GetKey(_Script_SlateCore::KeyEvent& Input);
    _Script_InputCore::Key GetGamepadBackKey();
    _Script_InputCore::Key GetGamepadAcceptKey();
    float GetAnalogValue(_Script_SlateCore::AnalogInputEvent& Input);
    bool EqualEqual_KeyKey(_Script_InputCore::Key A, _Script_InputCore::Key B);
    bool EqualEqual_InputChordInputChord(_Script_Slate::InputChord A, _Script_Slate::InputChord B);
    void CalibrateTilt();
}; // Size: 0x28
#pragma pack(pop)
}
