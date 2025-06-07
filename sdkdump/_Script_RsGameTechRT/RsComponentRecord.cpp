#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsComponentRecord.hpp"
void* _Script_RsGameTechRT::RsComponentRecord::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsComponentRecord::get_ComponentData() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsComponentRecord::get_UniqueIdentifier() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsComponentRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsComponentRecord");
    return result;
}
