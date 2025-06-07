#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_ButtonMash : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x30]; public:
    void* get_ButtonMashIdentifier();
    bool get_bStandAlone();
    void set_bStandAlone(bool value);
    void* get_ButtonToPress();
    int32_t& get_NumPressToSucceed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
