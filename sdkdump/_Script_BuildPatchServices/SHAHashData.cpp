#include "..\FUObjectArray.hpp"
#include "SHAHashData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BuildPatchServices::SHAHashData::get_Hash() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::SHAHashData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BuildPatchServices.SHAHashData");
    return result;
}
