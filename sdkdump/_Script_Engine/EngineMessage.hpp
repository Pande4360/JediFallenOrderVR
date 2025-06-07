#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LocalMessage.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EngineMessage : public LocalMessage {
    private: char pad_28[0x80]; public:
    void* get_FailedPlaceMessage();
    void* get_MaxedOutMessage();
    void* get_EnteredMessage();
    void* get_LeftMessage();
    void* get_GlobalNameChange();
    void* get_SpecEnteredMessage();
    void* get_NewPlayerMessage();
    void* get_NewSpecMessage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
