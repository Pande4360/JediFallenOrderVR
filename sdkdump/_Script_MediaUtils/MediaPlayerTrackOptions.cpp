#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaPlayerTrackOptions.hpp"
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Audio() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Script() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Caption() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_MetaData() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Subtitle() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Video() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_MediaUtils::MediaPlayerTrackOptions::get_Text() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MediaUtils::MediaPlayerTrackOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaUtils.MediaPlayerTrackOptions");
    return result;
}
