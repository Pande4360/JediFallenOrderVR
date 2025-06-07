#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_Description();
    bool get_bNeedsSkeleton();
    void set_bNeedsSkeleton(bool value);
    bool get_bEnableSegmenting();
    void set_bEnableSegmenting(bool value);
    void* get_IdealNumFramesPerSegment();
    void* get_MaxNumFramesPerSegment();
    void* get_TranslationCompressionFormat();
    void* get_RotationCompressionFormat();
    void* get_ScaleCompressionFormat();
    float& get_MaxCurveError();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
