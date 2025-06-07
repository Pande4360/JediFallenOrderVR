#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsActorRecord.hpp"
void* _Script_RsGameTechRT::RsActorRecord::get_PropertyOverrides() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsActorRecord::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsActorRecord::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_RsGameTechRT::RsActorRecord::set_bTransformSet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsActorRecord::get_UniqueIdentifier() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsActorRecord::get_ActorData() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsActorRecord::get_SerializedComponents() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_RsGameTechRT::RsActorRecord::get_bTransformSet() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsActorRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsActorRecord");
    return result;
}
