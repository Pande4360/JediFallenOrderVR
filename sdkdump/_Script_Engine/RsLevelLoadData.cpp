#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLevelLoadData.hpp"
#include "RsStreamingDefinition.hpp"
void* _Script_Engine::RsLevelLoadData::get_LoadType() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsLevelLoadData::get_StreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x0);
}
bool _Script_Engine::RsLevelLoadData::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
int32_t& _Script_Engine::RsLevelLoadData::get_LevelLODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void _Script_Engine::RsLevelLoadData::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RsLevelLoadData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsLevelLoadData");
    return result;
}
