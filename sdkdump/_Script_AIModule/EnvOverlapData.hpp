#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvOverlapData {
    private: char pad_0[0x20]; public:
    float& get_ExtentX();
    float& get_ExtentY();
    float& get_ExtentZ();
    void* get_ShapeOffset();
    void* get_OverlapChannel();
    void* get_OverlapShape();
    bool get_bOnlyBlockingHits();
    void set_bOnlyBlockingHits(bool value);
    bool get_bOverlapComplex();
    void set_bOverlapComplex(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
