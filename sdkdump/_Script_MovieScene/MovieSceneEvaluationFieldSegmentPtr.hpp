#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneEvaluationFieldTrackPtr.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEvaluationFieldSegmentPtr : public MovieSceneEvaluationFieldTrackPtr {
    private: char pad_8[0x4]; public:
    void* get_SegmentID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
