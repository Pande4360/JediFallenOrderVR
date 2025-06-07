#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ImgMediaSettings.hpp"
int32_t& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheThreadStackSizeKB() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_DefaultFrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheSizeGB() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheBehindPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
int32_t& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheThreads() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_ExrDecoderThreads() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_DefaultProxy() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_ImgMediaFactory::ImgMediaSettings::get_UseDefaultProxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_ImgMediaFactory::ImgMediaSettings::set_UseDefaultProxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ImgMediaFactory::ImgMediaSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImgMediaFactory.ImgMediaSettings");
    return result;
}
