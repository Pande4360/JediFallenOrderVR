#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_MediaAssets\MediaTexture.hpp"
#include "MovieSceneMediaSectionParams.hpp"
void* _Script_MediaCompositing::MovieSceneMediaSectionParams::get_SectionEndFrame() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_MediaAssets::MediaSoundComponent*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaSoundComponent() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0x0);
}
void _Script_MediaCompositing::MovieSceneMediaSectionParams::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x8);
}
_Script_MediaAssets::MediaTexture*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaTexture() {
    return *(_Script_MediaAssets::MediaTexture**)((uintptr_t)this + 0x10);
}
void* _Script_MediaCompositing::MovieSceneMediaSectionParams::get_SectionStartFrame() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x18);
}
bool _Script_MediaCompositing::MovieSceneMediaSectionParams::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaSectionParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaCompositing.MovieSceneMediaSectionParams");
    return result;
}
