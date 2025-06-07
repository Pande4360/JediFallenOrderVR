#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimCompress.hpp"
bool _Script_Engine::AnimCompress::get_bNeedsSkeleton() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimCompress::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::AnimCompress::set_bNeedsSkeleton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimCompress::set_bEnableSegmenting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::AnimCompress::get_bEnableSegmenting() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void* _Script_Engine::AnimCompress::get_IdealNumFramesPerSegment() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::AnimCompress::get_MaxNumFramesPerSegment() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimCompress::get_TranslationCompressionFormat() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::AnimCompress::get_RotationCompressionFormat() {
    return (void*)((uintptr_t)this + 0x45);
}
void* _Script_Engine::AnimCompress::get_ScaleCompressionFormat() {
    return (void*)((uintptr_t)this + 0x46);
}
float& _Script_Engine::AnimCompress::get_MaxCurveError() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress");
    return result;
}
