#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRopeAttachmentDetectionSet {
    private: char pad_0[0x38]; public:
    void* get_DetectionBone();
    void* get_DetectionLocalOffset();
    void* get_RopeTypes();
    void* get_Cones();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
