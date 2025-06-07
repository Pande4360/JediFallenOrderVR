#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InputComponent : public ActorComponent {
    private: char pad_170[0x88]; public:
    void* get_CachedKeyToActionInfo();
    static _Script_CoreUObject::Class* static_class();
    bool WasControllerKeyJustReleased(_Script_InputCore::Key Key);
    bool WasControllerKeyJustPressed(_Script_InputCore::Key Key);
    bool IsControllerKeyDown(_Script_InputCore::Key Key);
    void GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    _Script_CoreUObject::Vector GetControllerVectorKeyState(_Script_InputCore::Key Key);
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY);
    float GetControllerKeyTimeDown(_Script_InputCore::Key Key);
    void GetControllerAnalogStickState(void* WhichStick, float& StickX, float& StickY);
    float GetControllerAnalogKeyState(_Script_InputCore::Key Key);
}; // Size: 0x1f8
#pragma pack(pop)
}
