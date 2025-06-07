#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSection : public MovieSceneSignedObject {
    private: char pad_50[0x90]; public:
    void* get_EvalOptions();
    void* get_Easing();
    void* get_SectionRange();
    void* get_PreRollFrames();
    void* get_PostRollFrames();
    int32_t& get_RowIndex();
    int32_t& get_OverlapPriority();
    bool get_bIsActive();
    void set_bIsActive(bool value);
    bool get_bIsLocked();
    void set_bIsLocked(bool value);
    float& get_StartTime();
    float& get_EndTime();
    float& get_PrerollTime();
    float& get_PostrollTime();
    bool get_bIsInfinite();
    void set_bIsInfinite(bool value);
    bool get_bSupportsInfiniteRange();
    void set_bSupportsInfiniteRange(bool value);
    void* get_BlendType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
