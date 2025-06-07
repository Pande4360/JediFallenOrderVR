#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerInput : public _Script_CoreUObject::Object {
    private: char pad_28[0x388]; public:
    void* get_DebugExecBindings();
    void* get_InvertedAxis();
    static _Script_CoreUObject::Class* static_class();
    void SetMouseSensitivity(float SensitivityX, float SensitivityY);
    void SetBind(void* BindName, void* Command);
    void InvertAxisKey(_Script_InputCore::Key AxisKey);
    void InvertAxis(void* AxisName);
    void ClearSmoothing();
}; // Size: 0x3b0
#pragma pack(pop)
}
