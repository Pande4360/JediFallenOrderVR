#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImgMediaSource.hpp"
#include "..\_Script_MediaAssets\BaseMediaSource.hpp"
void* _Script_ImgMedia::ImgMediaSource::get_FrameRateOverride() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ImgMedia::ImgMediaSource::get_ProxyOverride() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ImgMedia::ImgMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImgMedia.ImgMediaSource");
    return result;
}
void* _Script_ImgMedia::ImgMediaSource::get_SequencePath() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_ImgMedia::ImgMediaSource::GetProxies(void*& OutProxies) {
    return;
}
void _Script_ImgMedia::ImgMediaSource::SetSequencePath(void* Path) {
    return;
}
void* _Script_ImgMedia::ImgMediaSource::GetSequencePath() {
    return;
}
