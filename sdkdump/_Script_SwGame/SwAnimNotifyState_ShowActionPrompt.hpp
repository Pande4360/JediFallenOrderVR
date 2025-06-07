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
struct SwAnimNotifyState_ShowActionPrompt : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x10]; public:
    void* get_ActionName();
    bool get_Pulsing();
    void set_Pulsing(bool value);
    bool get_ShowDuringReaction();
    void set_ShowDuringReaction(bool value);
    float& get_MaxDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
