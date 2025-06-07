#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineMessages {
#pragma pack(push, 1)
struct EngineServicePong {
    private: char pad_0[0x50]; public:
    void* get_CurrentLevel();
    int32_t& get_EngineVersion();
    bool get_HasBegunPlay();
    void set_HasBegunPlay(bool value);
    void* get_InstanceId();
    void* get_InstanceType();
    void* get_SessionId();
    float& get_WorldTimeSeconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
