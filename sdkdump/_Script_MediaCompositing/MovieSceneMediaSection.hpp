#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_MediaAssets {
struct MediaSoundComponent;
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
struct MovieSceneMediaSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x30]; public:
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    bool get_bLooping();
    void set_bLooping(bool value);
    _Script_MediaAssets::MediaTexture*& get_MediaTexture();
    _Script_MediaAssets::MediaSoundComponent*& get_MediaSoundComponent();
    bool get_bUseExternalMediaPlayer();
    void set_bUseExternalMediaPlayer(bool value);
    _Script_MediaAssets::MediaPlayer*& get_ExternalMediaPlayer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
