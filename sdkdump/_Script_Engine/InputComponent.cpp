#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
#include "InputComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
bool _Script_Engine::InputComponent::WasControllerKeyJustPressed(_Script_InputCore::Key Key) {
    return;
}
void* _Script_Engine::InputComponent::get_CachedKeyToActionInfo() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void _Script_Engine::InputComponent::GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::InputComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputComponent");
    return result;
}
bool _Script_Engine::InputComponent::IsControllerKeyDown(_Script_InputCore::Key Key) {
    return;
}
bool _Script_Engine::InputComponent::WasControllerKeyJustReleased(_Script_InputCore::Key Key) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::InputComponent::GetControllerVectorKeyState(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::InputComponent::GetControllerMouseDelta(float& DeltaX, float& DeltaY) {
    return;
}
float _Script_Engine::InputComponent::GetControllerKeyTimeDown(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::InputComponent::GetControllerAnalogStickState(void* WhichStick, float& StickX, float& StickY) {
    return;
}
float _Script_Engine::InputComponent::GetControllerAnalogKeyState(_Script_InputCore::Key Key) {
    return;
}
