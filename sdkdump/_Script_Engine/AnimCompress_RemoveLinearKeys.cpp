#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_RemoveLinearKeys.hpp"
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxPosDiff() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bRetarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_EffectorDiffSocket() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxAngleDiff() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_ParentKeyScale() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MinEffectorDiff() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxScaleDiff() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::AnimCompress_RemoveLinearKeys::get_MaxEffectorDiff() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bRetarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bActuallyFilterLinearKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 2 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bActuallyFilterLinearKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bOptimizeForForwardPlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 4 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bOptimizeForForwardPlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bUseDecompression() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 8 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bUseDecompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::AnimCompress_RemoveLinearKeys::get_bUseMultithreading() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 16 != 0;
}
void _Script_Engine::AnimCompress_RemoveLinearKeys::set_bUseMultithreading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_RemoveLinearKeys::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_RemoveLinearKeys");
    return result;
}
