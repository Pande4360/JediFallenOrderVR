#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseMediaSource.hpp"
#include "FileMediaSource.hpp"
void* _Script_MediaAssets::FileMediaSource::get_FilePath() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_MediaAssets::FileMediaSource::get_PrecacheFile() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_MediaAssets::FileMediaSource::set_PrecacheFile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MediaAssets::FileMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.FileMediaSource");
    return result;
}
void _Script_MediaAssets::FileMediaSource::SetFilePath(void* Path) {
    return;
}
