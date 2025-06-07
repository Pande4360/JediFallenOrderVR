#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialParameterLocalCollectionInfo.hpp"
#include "RsMaterialParameterLocalCollection.hpp"
void* _Script_Engine::MaterialParameterLocalCollectionInfo::get_StateId() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::RsMaterialParameterLocalCollection*& _Script_Engine::MaterialParameterLocalCollectionInfo::get_ParameterCollection() {
    return *(_Script_Engine::RsMaterialParameterLocalCollection**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterLocalCollectionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialParameterLocalCollectionInfo");
    return result;
}
