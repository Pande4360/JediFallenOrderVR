#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSaveGameInfo.hpp"
void* _Script_RsGameTechRT::RsSaveGameInfo::get_SaveName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_SaveSlot() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_PlanetName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_StreamingDefinition() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_StreamingPlayerStartName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_StreamingDefinitionPath() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSaveGameInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSaveGameInfo");
    return result;
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_TimeSavedText() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_TimeSaved() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_RsGameTechRT::RsSaveGameInfo::get_Changelist() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
bool _Script_RsGameTechRT::RsSaveGameInfo::get_bCorrupt() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSaveGameInfo::set_bCorrupt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSaveGameInfo::get_MetaData() {
    return (void*)((uintptr_t)this + 0x70);
}
