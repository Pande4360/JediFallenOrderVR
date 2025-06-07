#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseMediaSource.hpp"
#include "MediaSource.hpp"
void* _Script_MediaAssets::BaseMediaSource::get_PlayerName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MediaAssets::BaseMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.BaseMediaSource");
    return result;
}
