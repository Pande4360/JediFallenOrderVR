#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PoseDataContainer {
    private: char pad_0[0x90]; public:
    void* get_PoseNames();
    void* get_Tracks();
    void* get_TrackMap();
    void* get_Poses();
    void* get_Curves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
