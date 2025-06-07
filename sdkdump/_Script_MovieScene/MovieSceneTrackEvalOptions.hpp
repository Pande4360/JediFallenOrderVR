#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTrackEvalOptions {
    private: char pad_0[0x4]; public:
    bool get_bCanEvaluateNearestSection();
    void set_bCanEvaluateNearestSection(bool value);
    bool get_bEvalNearestSection();
    void set_bEvalNearestSection(bool value);
    bool get_bEvaluateInPreroll();
    void set_bEvaluateInPreroll(bool value);
    bool get_bEvaluateInPostroll();
    void set_bEvaluateInPostroll(bool value);
    bool get_bEvaluateNearestSection();
    void set_bEvaluateNearestSection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
