#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_MediaAssets\MediaTexture.hpp"
#include "MovieSceneMediaSection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0xe0);
}
bool _Script_MediaCompositing::MovieSceneMediaSection::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_MediaCompositing::MovieSceneMediaSection::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaCompositing::MovieSceneMediaSection::get_ExternalMediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x108);
}
_Script_MediaAssets::MediaTexture*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaTexture() {
    return *(_Script_MediaAssets::MediaTexture**)((uintptr_t)this + 0xf0);
}
_Script_MediaAssets::MediaSoundComponent*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaSoundComponent() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0xf8);
}
bool _Script_MediaCompositing::MovieSceneMediaSection::get_bUseExternalMediaPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Script_MediaCompositing::MovieSceneMediaSection::set_bUseExternalMediaPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MovieSceneMediaSection");
    return result;
}
