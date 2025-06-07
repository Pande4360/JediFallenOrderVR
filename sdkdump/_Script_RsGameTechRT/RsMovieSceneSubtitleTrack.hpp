#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMovieSceneSubtitleTrack : public _Script_MovieScene::MovieSceneTrack {
    private: char pad_58[0x18]; public:
    void* get_Sections();
    bool get_bIsAMasterTrack();
    void set_bIsAMasterTrack(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
