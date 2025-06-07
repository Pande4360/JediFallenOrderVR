#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Texture.hpp"
namespace _Script_BinkMediaPlayer {
struct BinkMediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BinkMediaPlayer {
#pragma pack(push, 1)
struct BinkMediaTexture : public _Script_Engine::Texture {
    private: char pad_b0[0x38]; public:
    void* get_AddressX();
    void* get_AddressY();
    _Script_BinkMediaPlayer::BinkMediaPlayer*& get_MediaPlayer();
    void* get_PixelFormat();
    bool get_tonemap();
    void set_tonemap(bool value);
    float& get_OutputNits();
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
    void SetMediaPlayer(_Script_BinkMediaPlayer::BinkMediaPlayer* InMediaPlayer);
    void Clear();
}; // Size: 0xe8
#pragma pack(pop)
}
