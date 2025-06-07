#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Texture.hpp"
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaTexture : public _Script_Engine::Texture {
    private: char pad_b0[0x90]; public:
    void* get_AddressX();
    void* get_AddressY();
    bool get_AutoClear();
    void set_AutoClear(bool value);
    void* get_ClearColor();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    static _Script_CoreUObject::Class* static_class();
    void SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer);
    int32_t GetWidth();
    _Script_MediaAssets::MediaPlayer* GetMediaPlayer();
    int32_t GetHeight();
    float GetAspectRatio();
}; // Size: 0x140
#pragma pack(pop)
}
