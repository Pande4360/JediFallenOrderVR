#include "..\FUObjectArray.hpp"
#include "BinkMediaPlayer.hpp"
#include "BinkMediaTexture.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
_Script_BinkMediaPlayer::BinkMediaPlayer*& _Script_BinkMediaPlayer::BinkMediaTexture::get_MediaPlayer() {
    return *(_Script_BinkMediaPlayer::BinkMediaPlayer**)((uintptr_t)this + 0xb8);
}
void* _Script_BinkMediaPlayer::BinkMediaTexture::get_AddressX() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_BinkMediaPlayer::BinkMediaTexture::get_PixelFormat() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_BinkMediaPlayer::BinkMediaTexture::get_AddressY() {
    return (void*)((uintptr_t)this + 0xb1);
}
bool _Script_BinkMediaPlayer::BinkMediaTexture::get_tonemap() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
float& _Script_BinkMediaPlayer::BinkMediaTexture::get_Alpha() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void _Script_BinkMediaPlayer::BinkMediaTexture::set_tonemap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_BinkMediaPlayer::BinkMediaTexture::get_OutputNits() {
    return *(float*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_BinkMediaPlayer::BinkMediaTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/BinkMediaPlayer.BinkMediaTexture");
    return result;
}
void _Script_BinkMediaPlayer::BinkMediaTexture::SetMediaPlayer(_Script_BinkMediaPlayer::BinkMediaPlayer* InMediaPlayer) {
    return;
}
void _Script_BinkMediaPlayer::BinkMediaTexture::Clear() {
    return;
}
