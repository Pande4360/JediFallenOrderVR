#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "MediaPlayer.hpp"
#include "MediaTexture.hpp"
void* _Script_MediaAssets::MediaTexture::get_ClearColor() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_MediaAssets::MediaTexture::get_AddressX() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_MediaAssets::MediaTexture::get_AddressY() {
    return (void*)((uintptr_t)this + 0xb1);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaTexture::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0xc8);
}
void _Script_MediaAssets::MediaTexture::set_AutoClear(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaAssets::MediaTexture::get_AutoClear() {
    return (*(uint8_t*)((uintptr_t)this + 0xb2 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaTexture");
    return result;
}
void _Script_MediaAssets::MediaTexture::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
int32_t _Script_MediaAssets::MediaTexture::GetWidth() {
    return;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaTexture::GetMediaPlayer() {
    return;
}
int32_t _Script_MediaAssets::MediaTexture::GetHeight() {
    return;
}
float _Script_MediaAssets::MediaTexture::GetAspectRatio() {
    return;
}
