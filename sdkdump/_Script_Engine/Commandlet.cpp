#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Commandlet.hpp"
void* _Script_Engine::Commandlet::get_HelpParamDescriptions() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::Commandlet::get_HelpDescription() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::Commandlet::get_HelpUsage() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::Commandlet::get_IsClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 2 != 0;
}
void* _Script_Engine::Commandlet::get_HelpWebLink() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::Commandlet::get_HelpParamNames() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::Commandlet::set_IsServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Commandlet::get_IsServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Engine::Commandlet::set_IsClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Commandlet::get_IsEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 4 != 0;
}
void _Script_Engine::Commandlet::set_IsEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Commandlet::get_LogToConsole() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 8 != 0;
}
void _Script_Engine::Commandlet::set_LogToConsole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Commandlet::get_ShowErrorCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 16 != 0;
}
void _Script_Engine::Commandlet::set_ShowErrorCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Commandlet::get_ShowProgress() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 32 != 0;
}
void _Script_Engine::Commandlet::set_ShowProgress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Commandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Commandlet");
    return result;
}
