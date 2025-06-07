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
struct MovieSceneTemplateGenerationLedger {
    private: char pad_0[0xa8]; public:
    void* get_LastTrackIdentifier();
    void* get_TrackSignatureToTrackIdentifier();
    void* get_SubSectionRanges();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
