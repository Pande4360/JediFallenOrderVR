#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GeometryCacheTrack.hpp"
namespace _Script_GeometryCache {
struct GeometryCacheCodecBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCacheTrackStreamable : public GeometryCacheTrack {
    private: char pad_58[0x130]; public:
    _Script_GeometryCache::GeometryCacheCodecBase*& get_Codec();
    float& get_StartSampleTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
