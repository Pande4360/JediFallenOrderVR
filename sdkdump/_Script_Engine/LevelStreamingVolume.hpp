#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreamingVolume : public Volume {
    private: char pad_398[0x18]; public:
    void* get_StreamingAreas();
    void* get_VolumeType();
    bool get_bDisabled();
    void set_bDisabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetStreamingAreaNames(_Script_CoreUObject::Object* ContextObject, void*& OutAreaNames);
}; // Size: 0x3b0
#pragma pack(pop)
}
