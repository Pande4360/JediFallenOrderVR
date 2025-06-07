#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PlayerInput.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Script_Engine::PlayerInput::get_DebugExecBindings() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::PlayerInput::get_InvertedAxis() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerInput");
    return result;
}
void _Script_Engine::PlayerInput::SetMouseSensitivity(float SensitivityX, float SensitivityY) {
    return;
}
void _Script_Engine::PlayerInput::SetBind(void* BindName, void* Command) {
    return;
}
void _Script_Engine::PlayerInput::ClearSmoothing() {
    return;
}
void _Script_Engine::PlayerInput::InvertAxisKey(_Script_InputCore::Key AxisKey) {
    return;
}
void _Script_Engine::PlayerInput::InvertAxis(void* AxisName) {
    return;
}
