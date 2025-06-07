#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SessionMessages {
#pragma pack(push, 1)
struct SessionServiceLog {
    private: char pad_0[0x38]; public:
    void* get_Category();
    void* get_Data();
    void* get_InstanceId();
    double& get_TimeSeconds();
    void* get_Verbosity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
