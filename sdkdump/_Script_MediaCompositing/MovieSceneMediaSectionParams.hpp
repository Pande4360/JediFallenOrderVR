#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MediaAssets {
struct MediaSoundComponent;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_MediaAssets {
struct MediaTexture;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MovieSceneMediaSectionParams {
    private: char pad_0[0x30]; public:
    _Script_MediaAssets::MediaSoundComponent*& get_MediaSoundComponent();
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    _Script_MediaAssets::MediaTexture*& get_MediaTexture();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    void* get_SectionStartFrame();
    void* get_SectionEndFrame();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
