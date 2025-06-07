#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetInputLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Slate\InputChord.hpp"
#include "..\_Script_SlateCore\AnalogInputEvent.hpp"
#include "..\_Script_SlateCore\InputEvent.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
bool _Script_Engine::KismetInputLibrary::InputEvent_IsRightShiftDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
int32_t _Script_Engine::KismetInputLibrary::PointerEvent_GetUserIndex(_Script_SlateCore::PointerEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::PointerEvent_IsTouchEvent(_Script_SlateCore::PointerEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsValid(_Script_InputCore::Key& Key) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetInputLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetInputLibrary");
    return result;
}
bool _Script_Engine::KismetInputLibrary::PointerEvent_IsMouseButtonDown(_Script_SlateCore::PointerEvent& Input, _Script_InputCore::Key MouseButton) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetInputLibrary::PointerEvent_GetScreenSpacePosition(_Script_SlateCore::PointerEvent& Input) {
    return;
}
_Script_InputCore::Key _Script_Engine::KismetInputLibrary::GetGamepadBackKey() {
    return;
}
float _Script_Engine::KismetInputLibrary::PointerEvent_GetWheelDelta(_Script_SlateCore::PointerEvent& Input) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(_Script_SlateCore::PointerEvent& Input) {
    return;
}
int32_t _Script_Engine::KismetInputLibrary::PointerEvent_GetTouchpadIndex(_Script_SlateCore::PointerEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsRightCommandDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
int32_t _Script_Engine::KismetInputLibrary::PointerEvent_GetPointerIndex(_Script_SlateCore::PointerEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsModifierKey(_Script_InputCore::Key& Key) {
    return;
}
void* _Script_Engine::KismetInputLibrary::PointerEvent_GetGestureType(_Script_SlateCore::PointerEvent& Input) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetInputLibrary::PointerEvent_GetGestureDelta(_Script_SlateCore::PointerEvent& Input) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetInputLibrary::PointerEvent_GetCursorDelta(_Script_SlateCore::PointerEvent& Input) {
    return;
}
_Script_InputCore::Key _Script_Engine::KismetInputLibrary::PointerEvent_GetEffectingButton(_Script_SlateCore::PointerEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsVectorAxis(_Script_InputCore::Key& Key) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsMouseButton(_Script_InputCore::Key& Key) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsKeyboardKey(_Script_InputCore::Key& Key) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsGamepadKey(_Script_InputCore::Key& Key) {
    return;
}
bool _Script_Engine::KismetInputLibrary::Key_IsFloatAxis(_Script_InputCore::Key& Key) {
    return;
}
void* _Script_Engine::KismetInputLibrary::Key_GetDisplayName(_Script_InputCore::Key& Key) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsShiftDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsRightControlDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsRightAltDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsRepeat(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsLeftShiftDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsLeftControlDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsLeftCommandDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsLeftAltDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsControlDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsCommandDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::InputEvent_IsAltDown(_Script_SlateCore::InputEvent& Input) {
    return;
}
int32_t _Script_Engine::KismetInputLibrary::GetUserIndex(_Script_SlateCore::KeyEvent& Input) {
    return;
}
_Script_InputCore::Key _Script_Engine::KismetInputLibrary::GetKey(_Script_SlateCore::KeyEvent& Input) {
    return;
}
_Script_InputCore::Key _Script_Engine::KismetInputLibrary::GetGamepadAcceptKey() {
    return;
}
bool _Script_Engine::KismetInputLibrary::EqualEqual_KeyKey(_Script_InputCore::Key A, _Script_InputCore::Key B) {
    return;
}
float _Script_Engine::KismetInputLibrary::GetAnalogValue(_Script_SlateCore::AnalogInputEvent& Input) {
    return;
}
bool _Script_Engine::KismetInputLibrary::EqualEqual_InputChordInputChord(_Script_Slate::InputChord A, _Script_Slate::InputChord B) {
    return;
}
void _Script_Engine::KismetInputLibrary::CalibrateTilt() {
    return;
}
