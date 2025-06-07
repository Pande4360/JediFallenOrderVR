#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstToggle : public InterpTrackInst {
    private: char pad_28[0x10]; public:
    void* get_Action();
    float& get_LastUpdatePosition();
    bool get_bSavedActiveState();
    void set_bSavedActiveState(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
