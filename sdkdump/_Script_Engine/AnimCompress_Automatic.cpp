#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_Automatic.hpp"
float& _Script_Engine::AnimCompress_Automatic::get_MaxEndEffectorError() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::AnimCompress_Automatic::get_bAutoReplaceIfExistingErrorTooGreat() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 2 != 0;
}
bool _Script_Engine::AnimCompress_Automatic::get_bRunCurrentDefaultCompressor() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_Engine::AnimCompress_Automatic::set_bRunCurrentDefaultCompressor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimCompress_Automatic::get_bRaiseMaxErrorToExisting() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 4 != 0;
}
void _Script_Engine::AnimCompress_Automatic::set_bAutoReplaceIfExistingErrorTooGreat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::AnimCompress_Automatic::set_bRaiseMaxErrorToExisting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::AnimCompress_Automatic::get_bTryExhaustiveSearch() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 8 != 0;
}
void _Script_Engine::AnimCompress_Automatic::set_bTryExhaustiveSearch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_Automatic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_Automatic");
    return result;
}
