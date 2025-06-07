#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct MovieSceneAkAudioRTPCSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x150]; public:
    void* get_Name();
    void* get_FloatCurve();
    void* get_FloatChannelSerializationHelper();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
