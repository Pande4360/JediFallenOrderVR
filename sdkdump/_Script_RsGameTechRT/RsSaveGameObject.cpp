#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "RsSaveGameObject.hpp"
void* _Script_RsGameTechRT::RsSaveGameObject::get_InitialStreamingAreas() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_Version() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_ConstructedVersion() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_ActorRecords() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_UncompressedActorRecordsSize() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_CompressedActorRecords() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_PlayerStartRecord() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_RsGameTechRT::RsSaveGameObject::get_bUsePlayerStartRecord() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSaveGameObject::set_bUsePlayerStartRecord(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_SaveSlot() {
    return (void*)((uintptr_t)this + 0xe1);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_TimeSaved() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_Changelist() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_Crc32() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_RsGameTechRT::RsSaveGameObject::get_MetaData() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSaveGameObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSaveGameObject");
    return result;
}
