#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseMediaSource.hpp"
#include "StreamMediaSource.hpp"
void* _Script_MediaAssets::StreamMediaSource::get_StreamUrl() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MediaAssets::StreamMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.StreamMediaSource");
    return result;
}
