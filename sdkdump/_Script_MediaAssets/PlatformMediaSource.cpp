#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaSource.hpp"
#include "PlatformMediaSource.hpp"
_Script_MediaAssets::MediaSource*& _Script_MediaAssets::PlatformMediaSource::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MediaAssets::PlatformMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.PlatformMediaSource");
    return result;
}
