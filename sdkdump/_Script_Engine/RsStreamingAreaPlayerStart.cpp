#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PlayerStart.hpp"
#include "RsStreamingAreaPlayerStart.hpp"
void* _Script_Engine::RsStreamingAreaPlayerStart::get_StreamingAreasToLoad() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Script_Engine::RsStreamingAreaPlayerStart::set_bCanBeSelectedByUser(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsStreamingAreaPlayerStart::get_InitialLoadTokens() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::RsStreamingAreaPlayerStart::get_InitialLoadToken() {
    return (void*)((uintptr_t)this + 0x3b0);
}
bool _Script_Engine::RsStreamingAreaPlayerStart::get_bCanBeAutoSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
bool _Script_Engine::RsStreamingAreaPlayerStart::get_bCanBeSelectedByUser() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b9 + 0)) & 1 != 0;
}
void _Script_Engine::RsStreamingAreaPlayerStart::set_bCanBeAutoSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsStreamingAreaPlayerStart::get_OnStartAtPlayerStart() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Script_Engine::RsStreamingAreaPlayerStart::PopulateStreamingAreaNameOptions(_Script_CoreUObject::Object* ContextObject, void*& OutAreaNames) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingAreaPlayerStart::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsStreamingAreaPlayerStart");
    return result;
}
void _Script_Engine::RsStreamingAreaPlayerStart::OnStart(void* LoadType) {
    return;
}
